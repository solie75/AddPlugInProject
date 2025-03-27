# AddPlugInProject
1. 플러그인 생성
	1. Eidt -> Plugins -> '+Add' -> Blueprint Library -> PlugIn Name 에 이름 설정.
2. U(PlugIn 이름)BPLibrary 에서 함수 생성.
```c++
// UManageUserNamePlugInBPLibrary.h
UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetUserName_PlugIn"), Category = "ManageUserNamePlugInTesting")
static void SetUserName(const FString& _newName);

UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetUserName_PlugIn"), Category = "ManageUserNamePlugInTesting")
static FString GetUserName();

static FString UserName;
```

3. Widget 생성
	1. Canvan 와 Editable Textbox 생성
	2. Editabl Textbox -> Details -> Events -> On Text Committed
	3. On Text Committed -> Switch On ETextCmmit -> SetUserName_PlugIn
4. Input Action , Input Mapping Context 생성
	1. PlayerController 에서 Input Mapping Context, Input Action 선언.
	2. PlayerController::BeginPlay() 에서 Input Mapping Context 를 EnhancedInput Sub system 에 추가. 및 Input Action 과 호출 될 함수 바인딩.
```c++
void ACB_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	if (UEnhancedInputComponent* EnhancedInput = FindComponentByClass<UEnhancedInputComponent>())
	{
		EnhancedInput->BindAction(
			this->IA_ChangeLevel,
			ETriggerEvent::Triggered,
			this,
			&ACB_PlayerController::OnLevelChange
		);
	}
}

void ACB_PlayerController::OnLevelChange()
{
	UCB_GameInstance* GameInstance = Cast<UCB_GameInstance>(GetGameInstance());
	GameInstance->ChangeLevel(TEXT("Level_2"));
}
```

5. GameInstance
```c++
void UCB_GameInstance::Init()
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::OpenLevel(World, TEXT("Level_1"));
	}
}

void UCB_GameInstance::ChangeLevel(FName _newLevelName)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::OpenLevel(World, _newLevelName);
	}
}
```

6. Level Blueprint
	1. Event BeginPlay -> Create WBP User Name Widget -> Add to Viewport
7. BP_PlayerController 
	1. Input Action 을 직접 드래그 앤 드롭 하여 Enhanced Input Action IA_PrintUserName 이벤트 노드 생성 -> GetUserName_PlugIn -> Print String

- space bar 를 눌러 Level 1 에서 Level 2 로 이동하고 기존에 Unkown 으로 저장되어 있던 User Name 을 Widget 을 통해 변경하고 P 키 를 눌러 User Name 을 Print 한다.