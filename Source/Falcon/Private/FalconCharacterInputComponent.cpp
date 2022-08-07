

#include "FalconCharacterInputComponent.h"


// Sets default values for this component's properties
UFalconCharacterInputComponent::UFalconCharacterInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFalconCharacterInputComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFalconCharacterInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFalconCharacterInputComponent::UpdateReferences()
{
}

void UFalconCharacterInputComponent::SetPlayerCharacterContext(const FSpyroCharacterInitialData & InitialData)
{
}

void UFalconCharacterInputComponent::PlayerControllerTick(float newDeltaSeconds)
{
}

bool UFalconCharacterInputComponent::IsControllable(FGameplayTag DisablingTag)
{
	return false;
}

void UFalconCharacterInputComponent::InputAxis_TriggerRight(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAxis_TriggerLeft(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAxis_RightStick_Y(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAxis_RightStick_X(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAxis_LeftStick_Y(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAxis_LeftStick_X(float AxisValue)
{
}

void UFalconCharacterInputComponent::InputAction_TriggerRight(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_TriggerLeft(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_ShoulderRight(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_ShoulderLeft(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_RightThumbstickButton(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_LeftThumbstickButton(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_FaceTop(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_FaceRight(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_FaceLeft(bool Pressed)
{
}

void UFalconCharacterInputComponent::InputAction_FaceBottom(bool Pressed)
{
}
