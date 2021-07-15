#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Attempt_Struct__pf3774553483.h"
#include "Runtime/Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h"
#include "Data_For_Each_Speech_Struct__pf3774553483.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class USaveData_C__pf1234790197;
class USettingsSavaData_C__pf1234790197;
class UAsyncActionHandleSaveGame;
class USaveGame;
class AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218;
class AProjectorScreen_Blueprint_C__pf3730827578;
class USpeech_Details_Pannel_C__pf4267528607;
class USwitcher_C__pf517162645;
#include "MenuGI__pf3730827578.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/MenuGI.MenuGI_C", OverrideNativeName="MenuGI_C"))
class UMenuGI_C__pf3730827578 : public UGameInstance
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnAsyncHandleSaveGame__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__OnAsyncHandleSaveGame__DelegateSignature__SC_0, USaveGame* , bpp__SaveGame__pf, bool , bpp__bSuccess__pf);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pages Array", Category="Default", MultiLine="true", OverrideNativeName="PagesArray"))
	TArray<FString> bpv__PagesArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Speech Name", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Speech Name"))
	FString bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Attempt #", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Attempt #"))
	int32 bpv__DataxtoxSavexxxAttemptxx__pfTTT3TTQ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Total Time Taken", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Total Time Taken"))
	float bpv__DataxtoxSavexxxTotalxTimexTaken__pfTTT3TTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Total Time Stuttering", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Total Time Stuttering"))
	float bpv__DataxtoxSavexxxTotalxTimexStuttering__pfTTT3TTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Audience Looking %", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Audience Looking %"))
	int32 bpv__DataxtoxSavexxxAudiencexLookingxx__pfTTT3TTTO;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Satisfacation Rating", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Satisfacation Rating"))
	int32 bpv__DataxtoxSavexxxSatisfacationxRating__pfTTT3TT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Fluency Satisfaction Rating", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Fluency Satisfaction Rating"))
	int32 bpv__DataxtoxSavexxxFluencyxSatisfactionxRating__pfTTT3TTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save : Message Satisfacation Rating", Category="Default", MultiLine="true", OverrideNativeName="Data to Save : Message Satisfacation Rating"))
	int32 bpv__DataxtoxSavexxxMessagexSatisfacationxRating__pfTTT3TTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Data To Save", Category="Default", MultiLine="true", OverrideNativeName="Data to Save"))
	FAttempt_Struct__pf3774553483 bpv__DataxtoxSave__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Attempts Of Selected Speech", Category="Default", MultiLine="true", OverrideNativeName="Attempts Of Selected Speech"))
	TArray<FAttempt_Struct__pf3774553483> bpv__AttemptsxOfxSelectedxSpeech__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Match Found to Save Data", Category="Default", MultiLine="true", OverrideNativeName="Match_Found_To_Save_Data"))
	bool bpv__Match_Found_To_Save_Data__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Match Found to Load Data", Category="Default", MultiLine="true", OverrideNativeName="Match_Found_To_Load_Data"))
	bool bpv__Match_Found_To_Load_Data__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Offset", Category="Default", MultiLine="true", OverrideNativeName="Rotation Offset"))
	float bpv__RotationxOffset__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Loaded Data To Overwrite", Category="Default", MultiLine="true", OverrideNativeName="Loaded Data to Overwrite"))
	USaveData_C__pf1234790197* bpv__LoadedxDataxtoxOverwrite__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Data To Load", Category="Default", MultiLine="true", OverrideNativeName="Data to Load"))
	USaveData_C__pf1234790197* bpv__DataxtoxLoad__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Attempt Number", Category="Default", MultiLine="true", OverrideNativeName="Local Attempt Number"))
	int32 bpv__LocalxAttemptxNumber__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Size", Category="Default", MultiLine="true", OverrideNativeName="TextSize"))
	FString bpv__TextSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Menu Music", Category="Default", MultiLine="true", OverrideNativeName="MenuMusic"))
	bool bpv__MenuMusic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ambience", Category="Default", MultiLine="true", OverrideNativeName="Ambience"))
	bool bpv__Ambience__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Applause", Category="Default", MultiLine="true", OverrideNativeName="Applause"))
	bool bpv__Applause__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stutter Button On", Category="Default", MultiLine="true", OverrideNativeName="StutterButtonOn"))
	bool bpv__StutterButtonOn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Microphone Color", Category="Default", MultiLine="true", OverrideNativeName="MicrophoneColor"))
	bool bpv__MicrophoneColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As Settings Sava Data", Category="Default", MultiLine="true", OverrideNativeName="As Settings Sava Data"))
	USettingsSavaData_C__pf1234790197* bpv__AsxSettingsxSavaxData__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Settings To Load", Category="Default", MultiLine="true", OverrideNativeName="Settings to Load"))
	USettingsSavaData_C__pf1234790197* bpv__SettingsxtoxLoad__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Eraseable Save Data", Category="Default", MultiLine="true", OverrideNativeName="Eraseable Save Data"))
	USaveData_C__pf1234790197* bpv__EraseablexSavexData__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	USaveGame* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_12"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_12"))
	bool b0l__K2Node_CustomEvent_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_1"))
	bool b0l__Temp_bool_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	USaveGame* b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Data"))
	USaveData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSave_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_11"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_11"))
	bool b0l__K2Node_CustomEvent_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_2"))
	bool b0l__Temp_bool_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_2"))
	USaveGame* b0l__Temp_object_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_10"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_10"))
	bool b0l__K2Node_CustomEvent_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_3"))
	bool b0l__Temp_bool_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_3"))
	USaveGame* b0l__Temp_object_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Data_1"))
	USaveData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSave_Data_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_1"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b0l__CallFunc_IsValid_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_9"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_9"))
	bool b0l__K2Node_CustomEvent_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_4"))
	bool b0l__Temp_bool_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_4"))
	USaveGame* b0l__Temp_object_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSettings_Sava_Data"))
	USettingsSavaData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSettings_Sava_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_2"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_3"))
	bool b0l__CallFunc_IsValid_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_8"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_8"))
	bool b0l__K2Node_CustomEvent_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_5"))
	bool b0l__Temp_bool_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_5"))
	USaveGame* b0l__Temp_object_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_7"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_7"))
	bool b0l__K2Node_CustomEvent_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_6"))
	bool b0l__Temp_bool_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_6"))
	USaveGame* b0l__Temp_object_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSettings_Sava_Data_1"))
	USettingsSavaData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSettings_Sava_Data_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_3"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_4"))
	bool b0l__CallFunc_IsValid_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_6"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_6"))
	bool b0l__K2Node_CustomEvent_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_7"))
	bool b0l__Temp_bool_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_7"))
	USaveGame* b0l__Temp_object_Variable_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSettings_Sava_Data_2"))
	USettingsSavaData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSettings_Sava_Data_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_4"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_5"))
	bool b0l__CallFunc_IsValid_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_5"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_5"))
	bool b0l__K2Node_CustomEvent_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_8"))
	bool b0l__Temp_bool_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_8"))
	USaveGame* b0l__Temp_object_Variable_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_4"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_4"))
	bool b0l__K2Node_CustomEvent_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_9"))
	bool b0l__Temp_bool_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_9"))
	USaveGame* b0l__Temp_object_Variable_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_3"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_3"))
	bool b0l__K2Node_CustomEvent_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_9"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_10"))
	bool b0l__Temp_bool_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_10"))
	USaveGame* b0l__Temp_object_Variable_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Data_2"))
	USaveData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSave_Data_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_5"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_6"))
	bool b0l__CallFunc_IsValid_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_10"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_2"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_2"))
	bool b0l__K2Node_CustomEvent_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_11"))
	bool b0l__Temp_bool_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_11"))
	USaveGame* b0l__Temp_object_Variable_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_1"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_1"))
	bool b0l__K2Node_CustomEvent_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_11"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_12"))
	bool b0l__Temp_bool_Variable_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_12"))
	USaveGame* b0l__Temp_object_Variable_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Data_3"))
	USaveData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSave_Data_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_6"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_7"))
	bool b0l__CallFunc_IsValid_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_12"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess"))
	bool b0l__K2Node_CustomEvent_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_13"))
	bool b0l__Temp_bool_Variable_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_13"))
	USaveGame* b0l__Temp_object_Variable_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_13"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_13"))
	bool b0l__K2Node_CustomEvent_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FData_For_Each_Speech_Struct__pf3774553483 b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b0l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncLoadGameFromSlot_ReturnValue_7"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_13"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_8"))
	bool b0l__CallFunc_IsValid_ReturnValue_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b0l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable_1"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_3"))
	int32 b0l__Temp_int_Loop_Counter_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable_2"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_3"))
	int32 b0l__Temp_int_Array_Index_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FString> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_14"))
	USaveGame* b0l__Temp_object_Variable_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Data_4"))
	USaveData_C__pf1234790197* b0l__K2Node_DynamicCast_AsSave_Data_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_4"))
	int32 b0l__Temp_int_Loop_Counter_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_14"))
	bool b0l__Temp_bool_Variable_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_4"))
	int32 b0l__Temp_int_Array_Index_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FData_For_Each_Speech_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint"))
	AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218* b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_Attempt_Struct"))
	FAttempt_Struct__pf3774553483 b0l__K2Node_MakeStruct_Attempt_Struct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_1"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_9"))
	bool b0l__CallFunc_IsValid_ReturnValue_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSpeech_Details_Pannel"))
	USpeech_Details_Pannel_C__pf4267528607* b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b0l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SaveGame_14"))
	USaveGame* b0l__K2Node_CustomEvent_SaveGame_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bSuccess_14"))
	bool b0l__K2Node_CustomEvent_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSwitcher"))
	USwitcher_C__pf517162645* b0l__K2Node_DynamicCast_AsSwitcher__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b0l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_2"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_10"))
	bool b0l__CallFunc_IsValid_ReturnValue_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	FData_For_Each_Speech_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	FAttempt_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_14"))
	F__OnAsyncHandleSaveGame__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_3"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_11"))
	bool b0l__CallFunc_IsValid_ReturnValue_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_4"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_12"))
	bool b0l__CallFunc_IsValid_ReturnValue_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable_3"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	FData_For_Each_Speech_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_5"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_13"))
	bool b0l__CallFunc_IsValid_ReturnValue_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Custom_File_Names"))
	TArray<FString> b0l__K2Node_CustomEvent_Custom_File_Names__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AsyncSaveGameToSlot_ReturnValue_6"))
	UAsyncActionHandleSaveGame* b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	FData_For_Each_Speech_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_14"))
	bool b0l__CallFunc_IsValid_ReturnValue_14__pf;
	UMenuGI_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MenuGI__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuGI__pf_19(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeleteExtraDataByMenuWorld"))
	virtual void bpf__DeleteExtraDataByMenuWorld__pf(TArray<FString> const& bpp__CustomxFilexNames__pfTT__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DeleteSpeechDataByResetButton"))
	virtual void bpf__DeleteSpeechDataByResetButton__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Load Settings Data"))
	virtual void bpf__LoadxSettingsxData__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SavingSettingsDataBySettingsMenu"))
	virtual void bpf__SavingSettingsDataBySettingsMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAttemptNumberByStartSpeech"))
	virtual void bpf__SetAttemptNumberByStartSpeech__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MenuGIDataLoadedByFloppyText"))
	virtual void bpf__MenuGIDataLoadedByFloppyText__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Call Saving Data"))
	virtual void bpf__CallxSavingxData__pfTT();
	UFUNCTION(meta=(Comment="/** Opportunity for blueprints to handle the game instance being initialized. */", DisplayName="Init", ToolTip="Opportunity for blueprints to handle the game instance being initialized.", CppFromBpEvent, OverrideNativeName="ReceiveInit"))
	virtual void bpf__ReceiveInit__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_4191AEB14B4F933E561BB79743D77D5B"))
	virtual void bpf__Completed_4191AEB14B4F933E561BB79743D77D5B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_AD27BA814621C2203F577EA3413F3DE4"))
	virtual void bpf__Completed_AD27BA814621C2203F577EA3413F3DE4__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_BC6B27B84C2547596E5562A487D52AE2"))
	virtual void bpf__Completed_BC6B27B84C2547596E5562A487D52AE2__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_38A7A9F741B63F60565A07BF2C93BB09"))
	virtual void bpf__Completed_38A7A9F741B63F60565A07BF2C93BB09__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_5A192CE14CBC16C19584FF9BE1E6CC62"))
	virtual void bpf__Completed_5A192CE14CBC16C19584FF9BE1E6CC62__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_AF11DD4A4FF3CBD24AB2BF890B8A1850"))
	virtual void bpf__Completed_AF11DD4A4FF3CBD24AB2BF890B8A1850__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_07E785FB4CE7D29C3D9995A55A0BBC63"))
	virtual void bpf__Completed_07E785FB4CE7D29C3D9995A55A0BBC63__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_F12F0CBF49CDFA716362919939ECD365"))
	virtual void bpf__Completed_F12F0CBF49CDFA716362919939ECD365__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_7AB285784EFF8EB2ACD1D7AC2A4C6C8E"))
	virtual void bpf__Completed_7AB285784EFF8EB2ACD1D7AC2A4C6C8E__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_F39CAD7C4422325B0A794FAEFEC91A5B"))
	virtual void bpf__Completed_F39CAD7C4422325B0A794FAEFEC91A5B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_CD1611F44C5E36496FEF749BB02A3D71"))
	virtual void bpf__Completed_CD1611F44C5E36496FEF749BB02A3D71__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_22FC88AC4E77FFC5BE6F90BD8521011B"))
	virtual void bpf__Completed_22FC88AC4E77FFC5BE6F90BD8521011B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_11BACE81460A1E244C4CB689C89AE0F9"))
	virtual void bpf__Completed_11BACE81460A1E244C4CB689C89AE0F9__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_5F29425C4919824E828FE19D3D16AFDB"))
	virtual void bpf__Completed_5F29425C4919824E828FE19D3D16AFDB__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Completed_95176AC24F9EAE697B7116BD4080F473"))
	virtual void bpf__Completed_95176AC24F9EAE697B7116BD4080F473__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf);
public:
};
