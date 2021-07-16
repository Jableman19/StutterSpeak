#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UBoxComponent;
class UTimelineComponent;
class AActor;
class UPrimitiveComponent;
class AFloppy_C__pf3730827578;
class ASpotLight;
class ABP_MotionController_C__pf3611121690;
class ALeftButton_C__pf2198246146;
class ARightButton_C__pf2198246146;
class AMotionControllerPawn_C__pf3611121690;
class UFloppy_Text_C__pf2075166221;
class AProjectorScreen_Blueprint_C__pf3730827578;
class ABeginButton_C__pf2198246146;
class AResetButton2_Button_Blueprint_C__pf3730827578;
class AResetButton2_Top_Blueprint_C__pf2552470103;
class AReset_Data_Base2_Blueprint_C__pf3730827578;
class UReset_Button_Display_C__pf4267528607;
#include "Projector_Blueprint__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Projector_Blueprint.Projector_Blueprint_C", OverrideNativeName="Projector_Blueprint_C"))
class AProjector_Blueprint_C__pf3730827578 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabBox"))
	UBoxComponent* bpv__GrabBox__pf;
	UPROPERTY(meta=(OverrideNativeName="FloppyMove_NewTrack_0_D91048D847E95A9C17D9CB8F0810431E"))
	float bpv__FloppyMove_NewTrack_0_D91048D847E95A9C17D9CB8F0810431E__pf;
	UPROPERTY(meta=(OverrideNativeName="FloppyMove__Direction_D91048D847E95A9C17D9CB8F0810431E"))
	TEnumAsByte<ETimelineDirection::Type> bpv__FloppyMove__Direction_D91048D847E95A9C17D9CB8F0810431E__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Projector_Blueprint", OverrideNativeName="FloppyMove"))
	UTimelineComponent* bpv__FloppyMove__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Floppy", Category="Default", MultiLine="true", OverrideNativeName="Current Floppy"))
	AActor* bpv__CurrentxFloppy__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Other Comp", Category="Default", MultiLine="true", OverrideNativeName="Other Comp"))
	UPrimitiveComponent* bpv__OtherxComp__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Other Actor", Category="Default", MultiLine="true", OverrideNativeName="Other Actor"))
	AActor* bpv__OtherxActor__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlapped Component", Category="Default", MultiLine="true", OverrideNativeName="Overlapped Component"))
	UPrimitiveComponent* bpv__OverlappedxComponent__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Not First Time", Category="Default", MultiLine="true", OverrideNativeName="Not First Time"))
	bool bpv__NotxFirstxTime__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chosen Floppy", Category="Default", MultiLine="true", OverrideNativeName="Chosen Floppy"))
	AFloppy_C__pf3730827578* bpv__ChosenxFloppy__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reset After Credits", Category="Default", MultiLine="true", OverrideNativeName="Reset after credits"))
	bool bpv__Resetxafterxcredits__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spotlight", Category="Default", MultiLine="true", OverrideNativeName="Spotlight"))
	ASpotLight* bpv__Spotlight__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_MotionController_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_MotionController_C__pf3611121690* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ABP_MotionController_C__pf3611121690* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf3611121690* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller_1"))
	ABP_MotionController_C__pf3611121690* b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FName b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	FName b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClassWithTag_OutActors"))
	TArray<AFloppy_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	AFloppy_C__pf3730827578* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<ALeftButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ARightButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	ALeftButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	ARightButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLeft_Button"))
	ALeftButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsLeft_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRight_Button"))
	ARightButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsRight_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_3"))
	TArray<AMotionControllerPawn_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_7"))
	AMotionControllerPawn_C__pf3611121690* b0l__CallFunc_Array_Get_Item_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf3611121690* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_Text"))
	UFloppy_Text_C__pf2075166221* b0l__K2Node_DynamicCast_AsFloppy_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_4"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_Text_1"))
	UFloppy_Text_C__pf2075166221* b0l__K2Node_DynamicCast_AsFloppy_Text_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_8"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_5"))
	TArray<ABeginButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_9"))
	ABeginButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_Text_2"))
	UFloppy_Text_C__pf2075166221* b0l__K2Node_DynamicCast_AsFloppy_Text_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBegin_Button"))
	ABeginButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsBegin_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_6"))
	TArray<ALeftButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_10"))
	ALeftButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_7"))
	TArray<ARightButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLeft_Button_1"))
	ALeftButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsLeft_Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b0l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_11"))
	ARightButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRight_Button_1"))
	ARightButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsRight_Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b0l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_8"))
	TArray<ABeginButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_12"))
	ABeginButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBegin_Button_1"))
	ABeginButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsBegin_Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_12"))
	bool b0l__K2Node_DynamicCast_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClassWithTag_OutActors_1"))
	TArray<ASpotLight*> b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_13"))
	ASpotLight* b0l__CallFunc_Array_Get_Item_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_9"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_14"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint_1"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_13"))
	bool b0l__K2Node_DynamicCast_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_10"))
	TArray<AResetButton2_Button_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_11"))
	TArray<AResetButton2_Top_Blueprint_C__pf2552470103*> b0l__CallFunc_GetAllActorsOfClass_OutActors_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_15"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_16"))
	AResetButton2_Top_Blueprint_C__pf2552470103* b0l__CallFunc_Array_Get_Item_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_14"))
	bool b0l__K2Node_DynamicCast_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint"))
	AResetButton2_Top_Blueprint_C__pf2552470103* b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_15"))
	bool b0l__K2Node_DynamicCast_bSuccess_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_12"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_17"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint_2"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_16"))
	bool b0l__K2Node_DynamicCast_bSuccess_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_13"))
	TArray<AResetButton2_Button_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_18"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_Text_3"))
	UFloppy_Text_C__pf2075166221* b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_17"))
	bool b0l__K2Node_DynamicCast_bSuccess_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_18"))
	bool b0l__K2Node_DynamicCast_bSuccess_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_14"))
	TArray<AResetButton2_Button_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_15"))
	TArray<AResetButton2_Top_Blueprint_C__pf2552470103*> b0l__CallFunc_GetAllActorsOfClass_OutActors_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_19"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_20"))
	AResetButton2_Top_Blueprint_C__pf2552470103* b0l__CallFunc_Array_Get_Item_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_19"))
	bool b0l__K2Node_DynamicCast_bSuccess_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1"))
	AResetButton2_Top_Blueprint_C__pf2552470103* b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_20"))
	bool b0l__K2Node_DynamicCast_bSuccess_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClassWithTag_OutActors_2"))
	TArray<AFloppy_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_21"))
	AFloppy_C__pf3730827578* b0l__CallFunc_Array_Get_Item_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy"))
	AFloppy_C__pf3730827578* b0l__K2Node_DynamicCast_AsFloppy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_21"))
	bool b0l__K2Node_DynamicCast_bSuccess_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_16"))
	TArray<AReset_Data_Base2_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_22"))
	AReset_Data_Base2_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint"))
	AReset_Data_Base2_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_22"))
	bool b0l__K2Node_DynamicCast_bSuccess_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_Display"))
	UReset_Button_Display_C__pf4267528607* b0l__K2Node_DynamicCast_AsReset_Button_Display__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_23"))
	bool b0l__K2Node_DynamicCast_bSuccess_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_23"))
	FName b0l__CallFunc_Array_Get_Item_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClassWithTag_OutActors_3"))
	TArray<AFloppy_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_24"))
	AFloppy_C__pf3730827578* b0l__CallFunc_Array_Get_Item_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_1"))
	AFloppy_C__pf3730827578* b0l__K2Node_DynamicCast_AsFloppy_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_24"))
	bool b0l__K2Node_DynamicCast_bSuccess_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1__pf;
	AProjector_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Projector_Blueprint_0"))
	void bpf__ExecuteUbergraph_Projector_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Projector_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Projector_Blueprint_2"))
	void bpf__ExecuteUbergraph_Projector_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Projector_Blueprint_3"))
	void bpf__ExecuteUbergraph_Projector_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Projector_Blueprint__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Projector_Blueprint_GrabBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Projector_Blueprint_GrabBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FadeInOnReset"))
	virtual void bpf__FadeInOnReset__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="FloppyMove__UpdateFunc"))
	virtual void bpf__FloppyMove__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="FloppyMove__FinishedFunc"))
	virtual void bpf__FloppyMove__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reset Current Floppy"))
	virtual void bpf__ResetxCurrentxFloppy__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reset post credits"))
	virtual void bpf__Resetxpostxcredits__pfTT(bool bpp__NeedsxReset__pfT);
public:
};
