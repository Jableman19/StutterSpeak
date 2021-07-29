#include "NativizedAssets.h"
#include "Switcher__pf517162645.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Effectiveness_Graph__pf517162645.h"
#include "Fluency_Graph__pf517162645.h"
#include "Eye_Contact_Graph__pf517162645.h"
#include "Time_Stuttering_Graph__pf517162645.h"
#include "Total_Time_Graph__pf517162645.h"
#include "Percentage_Stuttering_Graph__pf517162645.h"
#include "ListViewData__pf517162645.h"
#include "ResultsForSwitcher__pf517162645.h"
#include "ProjectorScreen_Blueprint__pf3730827578.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Speech_Details_Pannel__pf4267528607.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USwitcher_C__pf517162645::USwitcher_C__pf517162645(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DataDisplay__pf = nullptr;
	bpv__Effectiveness_Graph__pf = nullptr;
	bpv__Eye_Contact_Graph__pf = nullptr;
	bpv__Fluency_Graph__pf = nullptr;
	bpv__ListViewData__pf = nullptr;
	bpv__Percentage_Stuttering_Graph__pf = nullptr;
	bpv__ResultsForSwitcher__pf = nullptr;
	bpv__Tab1__pf = nullptr;
	bpv__Tab2__pf = nullptr;
	bpv__Tab3__pf = nullptr;
	bpv__Tab4__pf = nullptr;
	bpv__Tab5__pf = nullptr;
	bpv__Tab6__pf = nullptr;
	bpv__Tab7__pf = nullptr;
	bpv__Tab8__pf = nullptr;
	bpv__Time_Stuttering_Graph__pf = nullptr;
	bpv__Total_Time_Graph__pf = nullptr;
	bpv__CurrentxTabxIndex__pfTT = 0;
	bpv__Tabs__pf = TArray<UButton*> ();
	bpv__Graphs__pf = TArray<UUserWidget*> ();
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USwitcher_C__pf517162645::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USwitcher_C__pf517162645::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpeech_Details_Pannel_C__pf4267528607::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UEffectiveness_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UFluency_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UEye_Contact_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UTime_Stuttering_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UTotal_Time_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPercentage_Stuttering_Graph_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UListViewData_C__pf517162645::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UResultsForSwitcher_C__pf517162645::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(9);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_38"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Top = -8.000000f;
	__Local__3->LayoutData.Offsets.Right = 200.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__3->ZOrder = 1;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UButton>(__Local__0, TEXT("Tab1"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__6 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	__Local__4->WidgetStyle.Disabled.ImageSize = FVector2D(300.000000, 0.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<UObject* >(&(__Local__4->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__7 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__8 = (*(AccessPrivateProperty<UObject* >(&(__Local__4->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__8 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(1);
	auto __Local__10 = NewObject<UButtonSlot>(__Local__4, TEXT("ButtonSlot_4"), (EObjectFlags)0x00280008);
	__Local__10->Parent = __Local__4;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_10"), (EObjectFlags)0x00280008);
	__Local__11->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"61C7D41C4709A98382B3F49F48FCAD1E\", \"Effectiveness\")")	);
	__Local__11->Font.Size = 20;
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__11), UTextLayoutWidget::__PPO__Justification() )));
	__Local__12 = ETextJustify::Type::Center;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	__Local__4->Slot = __Local__3;
	__Local__4->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_39"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = 200.000000f;
	__Local__13->LayoutData.Offsets.Top = -8.000000f;
	__Local__13->LayoutData.Offsets.Right = 200.000000f;
	__Local__13->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__13->ZOrder = 1;
	__Local__13->Parent = __Local__1;
	auto __Local__14 = NewObject<UButton>(__Local__0, TEXT("Tab2"), (EObjectFlags)0x00280008);
	__Local__14->WidgetStyle.Normal.ImageSize = FVector2D(0.000000, 0.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__14->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__15 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__14->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__14->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__18 = (*(AccessPrivateProperty<UObject* >(&(__Local__14->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__18 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<UButtonSlot>(__Local__14, TEXT("ButtonSlot_2"), (EObjectFlags)0x00280008);
	__Local__20->Parent = __Local__14;
	auto __Local__21 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"0437C3BF45F6F386F5802B91047B0DD5\", \"Fluency\")")	);
	__Local__21->Font.Size = 20;
	auto& __Local__22 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__21), UTextLayoutWidget::__PPO__Justification() )));
	__Local__22 = ETextJustify::Type::Center;
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__14->Slot = __Local__13;
	__Local__14->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__13->Content = __Local__14;
	__Local__2.Add(__Local__13);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_40"), (EObjectFlags)0x00280008);
	__Local__23->LayoutData.Offsets.Left = 400.000000f;
	__Local__23->LayoutData.Offsets.Top = -8.000000f;
	__Local__23->LayoutData.Offsets.Right = 200.000000f;
	__Local__23->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__23->ZOrder = 1;
	__Local__23->Parent = __Local__1;
	auto __Local__24 = NewObject<UButton>(__Local__0, TEXT("Tab3"), (EObjectFlags)0x00280008);
	__Local__24->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__28 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__28 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(1);
	auto __Local__30 = NewObject<UButtonSlot>(__Local__24, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__30->Parent = __Local__24;
	auto __Local__31 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__31->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"71AE3F964E57E7CBC42A0698D8CE4B85\", \"Eye Contact\")")	);
	__Local__31->Font.Size = 20;
	auto& __Local__32 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__31), UTextLayoutWidget::__PPO__Justification() )));
	__Local__32 = ETextJustify::Type::Center;
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__23->Content = __Local__24;
	__Local__2.Add(__Local__23);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_41"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = 600.000000f;
	__Local__33->LayoutData.Offsets.Top = -8.000000f;
	__Local__33->LayoutData.Offsets.Right = 200.000000f;
	__Local__33->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__33->ZOrder = 1;
	__Local__33->Parent = __Local__1;
	auto __Local__34 = NewObject<UButton>(__Local__0, TEXT("Tab4"), (EObjectFlags)0x00280008);
	__Local__34->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__35 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__36 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(1);
	auto __Local__40 = NewObject<UButtonSlot>(__Local__34, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__40->Parent = __Local__34;
	auto __Local__41 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__41->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"0A6F183C422BC16A54F88097E0E3A152\", \"Time Stuttering\")")	);
	__Local__41->Font.Size = 20;
	auto& __Local__42 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__41), UTextLayoutWidget::__PPO__Justification() )));
	__Local__42 = ETextJustify::Type::Center;
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__39.Add(__Local__40);
	__Local__34->Slot = __Local__33;
	__Local__34->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__33->Content = __Local__34;
	__Local__2.Add(__Local__33);
	auto __Local__43 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_42"), (EObjectFlags)0x00280008);
	__Local__43->LayoutData.Offsets.Left = 1000.000000f;
	__Local__43->LayoutData.Offsets.Top = -8.000000f;
	__Local__43->LayoutData.Offsets.Right = 200.000000f;
	__Local__43->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__43->ZOrder = 1;
	__Local__43->Parent = __Local__1;
	auto __Local__44 = NewObject<UButton>(__Local__0, TEXT("Tab6"), (EObjectFlags)0x00280008);
	__Local__44->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<UObject* >(&(__Local__44->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__47 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__48 = (*(AccessPrivateProperty<UObject* >(&(__Local__44->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__48 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UButtonSlot>(__Local__44, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__44;
	auto __Local__51 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_7"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"568DE68E47D876F875BD63BD973A68E6\", \"Percentage Stuttering\")")	);
	__Local__51->Font.Size = 20;
	auto& __Local__52 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__51), UTextLayoutWidget::__PPO__Justification() )));
	__Local__52 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__54{};
	const FProperty* __Local__53 = __Local__54.Get();
	if (nullptr == __Local__53)
	{
		__Local__53 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__53);
		__Local__54 = __Local__53;
	}
	(((FBoolProperty*)__Local__53)->SetPropertyValue_InContainer((__Local__51), true, 0));
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	__Local__44->Slot = __Local__43;
	__Local__44->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__43->Content = __Local__44;
	__Local__2.Add(__Local__43);
	auto __Local__55 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_43"), (EObjectFlags)0x00280008);
	__Local__55->LayoutData.Offsets.Left = 800.000000f;
	__Local__55->LayoutData.Offsets.Top = -8.000000f;
	__Local__55->LayoutData.Offsets.Right = 200.000000f;
	__Local__55->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__55->ZOrder = 1;
	__Local__55->Parent = __Local__1;
	auto __Local__56 = NewObject<UButton>(__Local__0, TEXT("Tab5"), (EObjectFlags)0x00280008);
	__Local__56->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<UObject* >(&(__Local__56->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__59 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<UObject* >(&(__Local__56->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__60 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(1);
	auto __Local__62 = NewObject<UButtonSlot>(__Local__56, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__62->Parent = __Local__56;
	auto __Local__63 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__63->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"5BBBCDF5472108812960D69F1F7BD640\", \"Speech Length\")")	);
	__Local__63->Font.Size = 20;
	auto& __Local__64 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__63), UTextLayoutWidget::__PPO__Justification() )));
	__Local__64 = ETextJustify::Type::Center;
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	__Local__56->Slot = __Local__55;
	__Local__56->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__55->Content = __Local__56;
	__Local__2.Add(__Local__55);
	auto __Local__65 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_44"), (EObjectFlags)0x00280008);
	__Local__65->LayoutData.Offsets.Left = 1200.000000f;
	__Local__65->LayoutData.Offsets.Top = -8.000000f;
	__Local__65->LayoutData.Offsets.Right = 200.000000f;
	__Local__65->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__65->ZOrder = 1;
	__Local__65->Parent = __Local__1;
	auto __Local__66 = NewObject<UButton>(__Local__0, TEXT("Tab7"), (EObjectFlags)0x00280008);
	__Local__66->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	auto& __Local__68 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__68 = FLinearColor(0.000000, 1.000000, 0.080067, 1.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<UObject* >(&(__Local__66->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__69 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__66->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__66), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UButtonSlot>(__Local__66, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__72->Parent = __Local__66;
	auto __Local__73 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_8"), (EObjectFlags)0x00280008);
	__Local__73->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"DAB8901648BB8B96B1C5439D82F7FE3A\", \"All Data\")")	);
	__Local__73->Font.Size = 20;
	auto& __Local__74 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__73), UTextLayoutWidget::__PPO__Justification() )));
	__Local__74 = ETextJustify::Type::Center;
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	__Local__66->Slot = __Local__65;
	__Local__66->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__65->Content = __Local__66;
	__Local__2.Add(__Local__65);
	auto __Local__75 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__75->LayoutData.Offsets.Left = 1400.000000f;
	__Local__75->LayoutData.Offsets.Top = -8.000000f;
	__Local__75->LayoutData.Offsets.Right = 200.000000f;
	__Local__75->LayoutData.Offsets.Bottom = 75.000000f;
	__Local__75->ZOrder = 1;
	__Local__75->Parent = __Local__1;
	auto __Local__76 = NewObject<UButton>(__Local__0, TEXT("Tab8"), (EObjectFlags)0x00280008);
	__Local__76->WidgetStyle.Normal.ImageSize = FVector2D(150.000000, 32.000000);
	auto& __Local__77 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__76->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__77 = FLinearColor(1.000000, 0.000000, 0.150030, 1.000000);
	__Local__76->WidgetStyle.Pressed.ImageSize = FVector2D(1890.000000, 1890.000000);
	__Local__76->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__76->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__76->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__76->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__78 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__76->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__78 = FLinearColor(0.000000, 0.120237, 0.562500, 0.749000);
	auto& __Local__79 = (*(AccessPrivateProperty<FName >(&(__Local__76->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__79 = FName();
	__Local__76->WidgetStyle.Pressed.ImageType = ESlateBrushImageType::Type::NoImage;
	auto& __Local__80 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__80 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__81 = (*(AccessPrivateProperty<UObject* >(&(__Local__76->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__81 = CastChecked<UObject>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__76), UPanelWidget::__PPO__Slots() )));
	__Local__82 = TArray<UPanelSlot*> ();
	__Local__82.Reserve(1);
	auto __Local__83 = NewObject<UButtonSlot>(__Local__76, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__83->Parent = __Local__76;
	auto __Local__84 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_9"), (EObjectFlags)0x00280008);
	__Local__84->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[8550EE454D4AA178E0F72F8B6A659AD6]\", \"247AA7F04DA25B8DEA0B04B647359061\", \"Last Attempt\")")	);
	__Local__84->Font.Size = 20;
	auto& __Local__85 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__84), UTextLayoutWidget::__PPO__Justification() )));
	__Local__85 = ETextJustify::Type::Center;
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__82.Add(__Local__83);
	__Local__76->Slot = __Local__75;
	__Local__76->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__75->Content = __Local__76;
	__Local__2.Add(__Local__75);
	auto __Local__86 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_46"), (EObjectFlags)0x00280008);
	__Local__86->LayoutData.Offsets.Top = 65.000000f;
	__Local__86->LayoutData.Offsets.Right = 1600.000000f;
	__Local__86->LayoutData.Offsets.Bottom = 750.000000f;
	__Local__86->Parent = __Local__1;
	auto __Local__87 = NewObject<UWidgetSwitcher>(__Local__0, TEXT("DataDisplay"), (EObjectFlags)0x00280008);
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__87), UPanelWidget::__PPO__Slots() )));
	__Local__88 = TArray<UPanelSlot*> ();
	__Local__88.Reserve(8);
	auto __Local__89 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_0"), (EObjectFlags)0x00280008);
	__Local__89->Parent = __Local__87;
	auto __Local__90 = NewObject<UEffectiveness_Graph_C__pf517162645>(__Local__0, TEXT("Effectiveness_Graph"), (EObjectFlags)0x00280008);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__88.Add(__Local__89);
	auto __Local__91 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_2"), (EObjectFlags)0x00280008);
	__Local__91->Parent = __Local__87;
	auto __Local__92 = NewObject<UFluency_Graph_C__pf517162645>(__Local__0, TEXT("Fluency_Graph"), (EObjectFlags)0x00280008);
	__Local__92->Slot = __Local__91;
	__Local__91->Content = __Local__92;
	__Local__88.Add(__Local__91);
	auto __Local__93 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_3"), (EObjectFlags)0x00280008);
	__Local__93->Parent = __Local__87;
	auto __Local__94 = NewObject<UEye_Contact_Graph_C__pf517162645>(__Local__0, TEXT("Eye_Contact_Graph"), (EObjectFlags)0x00280008);
	__Local__94->Slot = __Local__93;
	__Local__93->Content = __Local__94;
	__Local__88.Add(__Local__93);
	auto __Local__95 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_21"), (EObjectFlags)0x00280008);
	__Local__95->Parent = __Local__87;
	auto __Local__96 = NewObject<UTime_Stuttering_Graph_C__pf517162645>(__Local__0, TEXT("Time_Stuttering_Graph"), (EObjectFlags)0x00280008);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__88.Add(__Local__95);
	auto __Local__97 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_22"), (EObjectFlags)0x00280008);
	__Local__97->Parent = __Local__87;
	auto __Local__98 = NewObject<UTotal_Time_Graph_C__pf517162645>(__Local__0, TEXT("Total_Time_Graph"), (EObjectFlags)0x00280008);
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__88.Add(__Local__97);
	auto __Local__99 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_4"), (EObjectFlags)0x00280008);
	__Local__99->Parent = __Local__87;
	auto __Local__100 = NewObject<UPercentage_Stuttering_Graph_C__pf517162645>(__Local__0, TEXT("Percentage_Stuttering_Graph"), (EObjectFlags)0x00280008);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__88.Add(__Local__99);
	auto __Local__101 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_8"), (EObjectFlags)0x00280008);
	__Local__101->Parent = __Local__87;
	auto __Local__102 = NewObject<UListViewData_C__pf517162645>(__Local__0, TEXT("ListViewData"), (EObjectFlags)0x00280008);
	__Local__102->Slot = __Local__101;
	__Local__102->RenderTransform.Translation = FVector2D(11.000000, 0.000000);
	__Local__101->Content = __Local__102;
	__Local__88.Add(__Local__101);
	auto __Local__103 = NewObject<UWidgetSwitcherSlot>(__Local__87, TEXT("WidgetSwitcherSlot_7"), (EObjectFlags)0x00280008);
	__Local__103->Parent = __Local__87;
	auto __Local__104 = NewObject<UResultsForSwitcher_C__pf517162645>(__Local__0, TEXT("ResultsForSwitcher"), (EObjectFlags)0x00280008);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__88.Add(__Local__103);
	__Local__87->Slot = __Local__86;
	__Local__87->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__86->Content = __Local__87;
	__Local__2.Add(__Local__86);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void USwitcher_C__pf517162645::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__105;
	SlotNames.Append(__Local__105);
}
void USwitcher_C__pf517162645::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__106;
	TArray<FDelegateRuntimeBinding>  __Local__107;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USwitcher_C__pf517162645::StaticClass())->MiscConvertedSubobjects[0]), __Local__106, __Local__107);
}
void USwitcher_C__pf517162645::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USwitcher_C__pf517162645::bpf__ExecuteUbergraph_Switcher__pf_0(int32 bpp__EntryPoint__pf)
{
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Effectiveness_Graph__pf))
	{
		bpv__Effectiveness_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__Fluency_Graph__pf))
	{
		bpv__Fluency_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__Eye_Contact_Graph__pf))
	{
		bpv__Eye_Contact_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__Time_Stuttering_Graph__pf))
	{
		bpv__Time_Stuttering_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__Total_Time_Graph__pf))
	{
		bpv__Total_Time_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__Percentage_Stuttering_Graph__pf))
	{
		bpv__Percentage_Stuttering_Graph__pf->bpf__CreateGraphBySwitcher__pf();
	}
	if(::IsValid(bpv__ListViewData__pf))
	{
		bpv__ListViewData__pf->bpf__ListViewData__pf();
	}
	if(::IsValid(bpv__ResultsForSwitcher__pf))
	{
		bpv__ResultsForSwitcher__pf->bpf__ResultsInitBySwitcher__pf();
	}
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue__pf = b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf->GetWidget();
	}
	b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf = Cast<USpeech_Details_Pannel_C__pf4267528607>(bpfv__CallFunc_GetWidget_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf))
	{
		b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf->bpf__SetSpeechNameByMenuGI__pf();
	}
	return; // KCST_GotoReturn
}
void USwitcher_C__pf517162645::bpf__ExecuteUbergraph_Switcher__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(0);
				}
			}
		case 6:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__109 = FSlateBrush::StaticStruct();
				uint8* __Local__110 = (uint8*)FMemory_Alloca(__Local__109->GetStructureSize());
				__Local__109->InitializeStruct(__Local__110);
				FSlateBrush& __Local__108 = *reinterpret_cast<FSlateBrush*>(__Local__110);
				__Local__108.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__108.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.Disabled = __Local__108;
				const UScriptStruct* __Local__112 = FMargin::StaticStruct();
				uint8* __Local__113 = (uint8*)FMemory_Alloca(__Local__112->GetStructureSize());
				__Local__112->InitializeStruct(__Local__113);
				FMargin& __Local__111 = *reinterpret_cast<FMargin*>(__Local__113);
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.NormalPadding = __Local__111;
				const UScriptStruct* __Local__115 = FMargin::StaticStruct();
				uint8* __Local__116 = (uint8*)FMemory_Alloca(__Local__115->GetStructureSize());
				__Local__115->InitializeStruct(__Local__116);
				FMargin& __Local__114 = *reinterpret_cast<FMargin*>(__Local__116);
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.PressedPadding = __Local__114;
				const UScriptStruct* __Local__118 = FSlateSound::StaticStruct();
				uint8* __Local__119 = (uint8*)FMemory_Alloca(__Local__118->GetStructureSize());
				__Local__118->InitializeStruct(__Local__119);
				FSlateSound& __Local__117 = *reinterpret_cast<FSlateSound*>(__Local__119);
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.PressedSlateSound = __Local__117;
				const UScriptStruct* __Local__121 = FSlateSound::StaticStruct();
				uint8* __Local__122 = (uint8*)FMemory_Alloca(__Local__121->GetStructureSize());
				__Local__121->InitializeStruct(__Local__122);
				FSlateSound& __Local__120 = *reinterpret_cast<FSlateSound*>(__Local__122);
				b0l__K2Node_MakeStruct_ButtonStyle_2__pf.HoveredSlateSound = __Local__120;
				if(::IsValid(bpv__Tab1__pf))
				{
					bpv__Tab1__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_2__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(1);
				}
			}
		case 8:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__124 = FSlateBrush::StaticStruct();
				uint8* __Local__125 = (uint8*)FMemory_Alloca(__Local__124->GetStructureSize());
				__Local__124->InitializeStruct(__Local__125);
				FSlateBrush& __Local__123 = *reinterpret_cast<FSlateBrush*>(__Local__125);
				__Local__123.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__123.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.Disabled = __Local__123;
				const UScriptStruct* __Local__127 = FMargin::StaticStruct();
				uint8* __Local__128 = (uint8*)FMemory_Alloca(__Local__127->GetStructureSize());
				__Local__127->InitializeStruct(__Local__128);
				FMargin& __Local__126 = *reinterpret_cast<FMargin*>(__Local__128);
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.NormalPadding = __Local__126;
				const UScriptStruct* __Local__130 = FMargin::StaticStruct();
				uint8* __Local__131 = (uint8*)FMemory_Alloca(__Local__130->GetStructureSize());
				__Local__130->InitializeStruct(__Local__131);
				FMargin& __Local__129 = *reinterpret_cast<FMargin*>(__Local__131);
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.PressedPadding = __Local__129;
				const UScriptStruct* __Local__133 = FSlateSound::StaticStruct();
				uint8* __Local__134 = (uint8*)FMemory_Alloca(__Local__133->GetStructureSize());
				__Local__133->InitializeStruct(__Local__134);
				FSlateSound& __Local__132 = *reinterpret_cast<FSlateSound*>(__Local__134);
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.PressedSlateSound = __Local__132;
				const UScriptStruct* __Local__136 = FSlateSound::StaticStruct();
				uint8* __Local__137 = (uint8*)FMemory_Alloca(__Local__136->GetStructureSize());
				__Local__136->InitializeStruct(__Local__137);
				FSlateSound& __Local__135 = *reinterpret_cast<FSlateSound*>(__Local__137);
				b0l__K2Node_MakeStruct_ButtonStyle_3__pf.HoveredSlateSound = __Local__135;
				if(::IsValid(bpv__Tab2__pf))
				{
					bpv__Tab2__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_3__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(2);
				}
			}
		case 10:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__139 = FSlateBrush::StaticStruct();
				uint8* __Local__140 = (uint8*)FMemory_Alloca(__Local__139->GetStructureSize());
				__Local__139->InitializeStruct(__Local__140);
				FSlateBrush& __Local__138 = *reinterpret_cast<FSlateBrush*>(__Local__140);
				__Local__138.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__138.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.Disabled = __Local__138;
				const UScriptStruct* __Local__142 = FMargin::StaticStruct();
				uint8* __Local__143 = (uint8*)FMemory_Alloca(__Local__142->GetStructureSize());
				__Local__142->InitializeStruct(__Local__143);
				FMargin& __Local__141 = *reinterpret_cast<FMargin*>(__Local__143);
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.NormalPadding = __Local__141;
				const UScriptStruct* __Local__145 = FMargin::StaticStruct();
				uint8* __Local__146 = (uint8*)FMemory_Alloca(__Local__145->GetStructureSize());
				__Local__145->InitializeStruct(__Local__146);
				FMargin& __Local__144 = *reinterpret_cast<FMargin*>(__Local__146);
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.PressedPadding = __Local__144;
				const UScriptStruct* __Local__148 = FSlateSound::StaticStruct();
				uint8* __Local__149 = (uint8*)FMemory_Alloca(__Local__148->GetStructureSize());
				__Local__148->InitializeStruct(__Local__149);
				FSlateSound& __Local__147 = *reinterpret_cast<FSlateSound*>(__Local__149);
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.PressedSlateSound = __Local__147;
				const UScriptStruct* __Local__151 = FSlateSound::StaticStruct();
				uint8* __Local__152 = (uint8*)FMemory_Alloca(__Local__151->GetStructureSize());
				__Local__151->InitializeStruct(__Local__152);
				FSlateSound& __Local__150 = *reinterpret_cast<FSlateSound*>(__Local__152);
				b0l__K2Node_MakeStruct_ButtonStyle_4__pf.HoveredSlateSound = __Local__150;
				if(::IsValid(bpv__Tab3__pf))
				{
					bpv__Tab3__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_4__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(3);
				}
			}
		case 12:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__154 = FSlateBrush::StaticStruct();
				uint8* __Local__155 = (uint8*)FMemory_Alloca(__Local__154->GetStructureSize());
				__Local__154->InitializeStruct(__Local__155);
				FSlateBrush& __Local__153 = *reinterpret_cast<FSlateBrush*>(__Local__155);
				__Local__153.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__153.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.Disabled = __Local__153;
				const UScriptStruct* __Local__157 = FMargin::StaticStruct();
				uint8* __Local__158 = (uint8*)FMemory_Alloca(__Local__157->GetStructureSize());
				__Local__157->InitializeStruct(__Local__158);
				FMargin& __Local__156 = *reinterpret_cast<FMargin*>(__Local__158);
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.NormalPadding = __Local__156;
				const UScriptStruct* __Local__160 = FMargin::StaticStruct();
				uint8* __Local__161 = (uint8*)FMemory_Alloca(__Local__160->GetStructureSize());
				__Local__160->InitializeStruct(__Local__161);
				FMargin& __Local__159 = *reinterpret_cast<FMargin*>(__Local__161);
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.PressedPadding = __Local__159;
				const UScriptStruct* __Local__163 = FSlateSound::StaticStruct();
				uint8* __Local__164 = (uint8*)FMemory_Alloca(__Local__163->GetStructureSize());
				__Local__163->InitializeStruct(__Local__164);
				FSlateSound& __Local__162 = *reinterpret_cast<FSlateSound*>(__Local__164);
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.PressedSlateSound = __Local__162;
				const UScriptStruct* __Local__166 = FSlateSound::StaticStruct();
				uint8* __Local__167 = (uint8*)FMemory_Alloca(__Local__166->GetStructureSize());
				__Local__166->InitializeStruct(__Local__167);
				FSlateSound& __Local__165 = *reinterpret_cast<FSlateSound*>(__Local__167);
				b0l__K2Node_MakeStruct_ButtonStyle_5__pf.HoveredSlateSound = __Local__165;
				if(::IsValid(bpv__Tab4__pf))
				{
					bpv__Tab4__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_5__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(4);
				}
			}
		case 14:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__169 = FSlateBrush::StaticStruct();
				uint8* __Local__170 = (uint8*)FMemory_Alloca(__Local__169->GetStructureSize());
				__Local__169->InitializeStruct(__Local__170);
				FSlateBrush& __Local__168 = *reinterpret_cast<FSlateBrush*>(__Local__170);
				__Local__168.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__168.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.Disabled = __Local__168;
				const UScriptStruct* __Local__172 = FMargin::StaticStruct();
				uint8* __Local__173 = (uint8*)FMemory_Alloca(__Local__172->GetStructureSize());
				__Local__172->InitializeStruct(__Local__173);
				FMargin& __Local__171 = *reinterpret_cast<FMargin*>(__Local__173);
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.NormalPadding = __Local__171;
				const UScriptStruct* __Local__175 = FMargin::StaticStruct();
				uint8* __Local__176 = (uint8*)FMemory_Alloca(__Local__175->GetStructureSize());
				__Local__175->InitializeStruct(__Local__176);
				FMargin& __Local__174 = *reinterpret_cast<FMargin*>(__Local__176);
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.PressedPadding = __Local__174;
				const UScriptStruct* __Local__178 = FSlateSound::StaticStruct();
				uint8* __Local__179 = (uint8*)FMemory_Alloca(__Local__178->GetStructureSize());
				__Local__178->InitializeStruct(__Local__179);
				FSlateSound& __Local__177 = *reinterpret_cast<FSlateSound*>(__Local__179);
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.PressedSlateSound = __Local__177;
				const UScriptStruct* __Local__181 = FSlateSound::StaticStruct();
				uint8* __Local__182 = (uint8*)FMemory_Alloca(__Local__181->GetStructureSize());
				__Local__181->InitializeStruct(__Local__182);
				FSlateSound& __Local__180 = *reinterpret_cast<FSlateSound*>(__Local__182);
				b0l__K2Node_MakeStruct_ButtonStyle_6__pf.HoveredSlateSound = __Local__180;
				if(::IsValid(bpv__Tab5__pf))
				{
					bpv__Tab5__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_6__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(5);
				}
			}
		case 16:
			{
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.Normal = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.Hovered = bpv__StylexOnxTab__pfTT;
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.Pressed = bpv__StylexOnxTab__pfTT;
				const UScriptStruct* __Local__184 = FSlateBrush::StaticStruct();
				uint8* __Local__185 = (uint8*)FMemory_Alloca(__Local__184->GetStructureSize());
				__Local__184->InitializeStruct(__Local__185);
				FSlateBrush& __Local__183 = *reinterpret_cast<FSlateBrush*>(__Local__185);
				__Local__183.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__183.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.Disabled = __Local__183;
				const UScriptStruct* __Local__187 = FMargin::StaticStruct();
				uint8* __Local__188 = (uint8*)FMemory_Alloca(__Local__187->GetStructureSize());
				__Local__187->InitializeStruct(__Local__188);
				FMargin& __Local__186 = *reinterpret_cast<FMargin*>(__Local__188);
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.NormalPadding = __Local__186;
				const UScriptStruct* __Local__190 = FMargin::StaticStruct();
				uint8* __Local__191 = (uint8*)FMemory_Alloca(__Local__190->GetStructureSize());
				__Local__190->InitializeStruct(__Local__191);
				FMargin& __Local__189 = *reinterpret_cast<FMargin*>(__Local__191);
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.PressedPadding = __Local__189;
				const UScriptStruct* __Local__193 = FSlateSound::StaticStruct();
				uint8* __Local__194 = (uint8*)FMemory_Alloca(__Local__193->GetStructureSize());
				__Local__193->InitializeStruct(__Local__194);
				FSlateSound& __Local__192 = *reinterpret_cast<FSlateSound*>(__Local__194);
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.PressedSlateSound = __Local__192;
				const UScriptStruct* __Local__196 = FSlateSound::StaticStruct();
				uint8* __Local__197 = (uint8*)FMemory_Alloca(__Local__196->GetStructureSize());
				__Local__196->InitializeStruct(__Local__197);
				FSlateSound& __Local__195 = *reinterpret_cast<FSlateSound*>(__Local__197);
				b0l__K2Node_MakeStruct_ButtonStyle_7__pf.HoveredSlateSound = __Local__195;
				if(::IsValid(bpv__Tab6__pf))
				{
					bpv__Tab6__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_7__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(6);
				}
			}
		case 18:
			{
				auto __Local__199 = FSlateBrush{};
				FSlateBrush  __Local__198 = __Local__199;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.Normal = ((::IsValid(bpv__Tab7__pf)) ? (bpv__Tab7__pf->WidgetStyle.Pressed) : (__Local__198));
				auto __Local__201 = FSlateBrush{};
				FSlateBrush  __Local__200 = __Local__201;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.Hovered = ((::IsValid(bpv__Tab7__pf)) ? (bpv__Tab7__pf->WidgetStyle.Pressed) : (__Local__200));
				auto __Local__203 = FSlateBrush{};
				FSlateBrush  __Local__202 = __Local__203;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.Pressed = ((::IsValid(bpv__Tab7__pf)) ? (bpv__Tab7__pf->WidgetStyle.Pressed) : (__Local__202));
				const UScriptStruct* __Local__205 = FSlateBrush::StaticStruct();
				uint8* __Local__206 = (uint8*)FMemory_Alloca(__Local__205->GetStructureSize());
				__Local__205->InitializeStruct(__Local__206);
				FSlateBrush& __Local__204 = *reinterpret_cast<FSlateBrush*>(__Local__206);
				__Local__204.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__204.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.Disabled = __Local__204;
				const UScriptStruct* __Local__208 = FMargin::StaticStruct();
				uint8* __Local__209 = (uint8*)FMemory_Alloca(__Local__208->GetStructureSize());
				__Local__208->InitializeStruct(__Local__209);
				FMargin& __Local__207 = *reinterpret_cast<FMargin*>(__Local__209);
				b0l__K2Node_MakeStruct_ButtonStyle__pf.NormalPadding = __Local__207;
				const UScriptStruct* __Local__211 = FMargin::StaticStruct();
				uint8* __Local__212 = (uint8*)FMemory_Alloca(__Local__211->GetStructureSize());
				__Local__211->InitializeStruct(__Local__212);
				FMargin& __Local__210 = *reinterpret_cast<FMargin*>(__Local__212);
				b0l__K2Node_MakeStruct_ButtonStyle__pf.PressedPadding = __Local__210;
				auto __Local__214 = FSlateSound{};
				FSlateSound  __Local__213 = __Local__214;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.PressedSlateSound = ((::IsValid(bpv__Tab7__pf)) ? (bpv__Tab7__pf->WidgetStyle.PressedSlateSound) : (__Local__213));
				auto __Local__216 = FSlateSound{};
				FSlateSound  __Local__215 = __Local__216;
				b0l__K2Node_MakeStruct_ButtonStyle__pf.HoveredSlateSound = ((::IsValid(bpv__Tab7__pf)) ? (bpv__Tab7__pf->WidgetStyle.HoveredSlateSound) : (__Local__215));
				if(::IsValid(bpv__Tab7__pf))
				{
					bpv__Tab7__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__DataDisplay__pf))
				{
					bpv__DataDisplay__pf->SetActiveWidgetIndex(7);
				}
			}
		case 20:
			{
				auto __Local__218 = FSlateBrush{};
				FSlateBrush  __Local__217 = __Local__218;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.Normal = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Pressed) : (__Local__217));
				auto __Local__220 = FSlateBrush{};
				FSlateBrush  __Local__219 = __Local__220;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.Hovered = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Pressed) : (__Local__219));
				auto __Local__222 = FSlateBrush{};
				FSlateBrush  __Local__221 = __Local__222;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.Pressed = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Pressed) : (__Local__221));
				const UScriptStruct* __Local__224 = FSlateBrush::StaticStruct();
				uint8* __Local__225 = (uint8*)FMemory_Alloca(__Local__224->GetStructureSize());
				__Local__224->InitializeStruct(__Local__225);
				FSlateBrush& __Local__223 = *reinterpret_cast<FSlateBrush*>(__Local__225);
				__Local__223.ImageSize = FVector2D(0.000000, 0.000000);
				__Local__223.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.Disabled = __Local__223;
				const UScriptStruct* __Local__227 = FMargin::StaticStruct();
				uint8* __Local__228 = (uint8*)FMemory_Alloca(__Local__227->GetStructureSize());
				__Local__227->InitializeStruct(__Local__228);
				FMargin& __Local__226 = *reinterpret_cast<FMargin*>(__Local__228);
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.NormalPadding = __Local__226;
				const UScriptStruct* __Local__230 = FMargin::StaticStruct();
				uint8* __Local__231 = (uint8*)FMemory_Alloca(__Local__230->GetStructureSize());
				__Local__230->InitializeStruct(__Local__231);
				FMargin& __Local__229 = *reinterpret_cast<FMargin*>(__Local__231);
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.PressedPadding = __Local__229;
				auto __Local__233 = FSlateSound{};
				FSlateSound  __Local__232 = __Local__233;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.PressedSlateSound = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.PressedSlateSound) : (__Local__232));
				auto __Local__235 = FSlateSound{};
				FSlateSound  __Local__234 = __Local__235;
				b0l__K2Node_MakeStruct_ButtonStyle_1__pf.HoveredSlateSound = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.HoveredSlateSound) : (__Local__234));
				if(::IsValid(bpv__Tab8__pf))
				{
					bpv__Tab8__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				__CurrentState = 33;
				break;
			}
		case 33:
			{
				bpf__ClearxButtonxColor__pfTT();
			}
		case 34:
			{
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 7);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 35:
			{
				bpv__CurrentxTabxIndex__pfTT = 0;
			}
		case 36:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 4);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 5);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 6);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 7);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__CurrentxTabxIndex__pfTT, 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 38:
			{
				bpv__CurrentxTabxIndex__pfTT = b0l__Temp_int_Variable_1__pf;
				__CurrentState = 36;
				break;
			}
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				bpf__ClearxButtonxColor__pfTT();
			}
		case 41:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 42:
			{
				bpv__CurrentxTabxIndex__pfTT = 7;
				__CurrentState = 36;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__CurrentxTabxIndex__pfTT, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 44:
			{
				bpv__CurrentxTabxIndex__pfTT = b0l__Temp_int_Variable__pf;
				__CurrentState = 36;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USwitcher_C__pf517162645::bpf__ExecuteUbergraph_Switcher__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	bpf__ClearxButtonxColor__pfTT();
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__DataDisplay__pf))
	{
		bpv__DataDisplay__pf->SetActiveWidgetIndex(0);
	}
	bpv__CurrentxTabxIndex__pfTT = 0;
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.Normal = bpv__StylexOnxTab__pfTT;
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.Hovered = bpv__StylexOnxTab__pfTT;
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.Pressed = bpv__StylexOnxTab__pfTT;
	const UScriptStruct* __Local__237 = FSlateBrush::StaticStruct();
	uint8* __Local__238 = (uint8*)FMemory_Alloca(__Local__237->GetStructureSize());
	__Local__237->InitializeStruct(__Local__238);
	FSlateBrush& __Local__236 = *reinterpret_cast<FSlateBrush*>(__Local__238);
	__Local__236.ImageSize = FVector2D(0.000000, 0.000000);
	__Local__236.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.Disabled = __Local__236;
	const UScriptStruct* __Local__240 = FMargin::StaticStruct();
	uint8* __Local__241 = (uint8*)FMemory_Alloca(__Local__240->GetStructureSize());
	__Local__240->InitializeStruct(__Local__241);
	FMargin& __Local__239 = *reinterpret_cast<FMargin*>(__Local__241);
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.NormalPadding = __Local__239;
	const UScriptStruct* __Local__243 = FMargin::StaticStruct();
	uint8* __Local__244 = (uint8*)FMemory_Alloca(__Local__243->GetStructureSize());
	__Local__243->InitializeStruct(__Local__244);
	FMargin& __Local__242 = *reinterpret_cast<FMargin*>(__Local__244);
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.PressedPadding = __Local__242;
	const UScriptStruct* __Local__246 = FSlateSound::StaticStruct();
	uint8* __Local__247 = (uint8*)FMemory_Alloca(__Local__246->GetStructureSize());
	__Local__246->InitializeStruct(__Local__247);
	FSlateSound& __Local__245 = *reinterpret_cast<FSlateSound*>(__Local__247);
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.PressedSlateSound = __Local__245;
	const UScriptStruct* __Local__249 = FSlateSound::StaticStruct();
	uint8* __Local__250 = (uint8*)FMemory_Alloca(__Local__249->GetStructureSize());
	__Local__249->InitializeStruct(__Local__250);
	FSlateSound& __Local__248 = *reinterpret_cast<FSlateSound*>(__Local__250);
	b0l__K2Node_MakeStruct_ButtonStyle_8__pf.HoveredSlateSound = __Local__248;
	if(::IsValid(bpv__Tab1__pf))
	{
		bpv__Tab1__pf->UButton::SetStyle(b0l__K2Node_MakeStruct_ButtonStyle_8__pf);
	}
	return; // KCST_GotoReturn
}
void USwitcher_C__pf517162645::bpf__ExecuteUbergraph_Switcher__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	auto __Local__252 = FSlateBrush{};
	FSlateBrush  __Local__251 = __Local__252;
	bpv__DefaultxStylexNormal__pfTT = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Normal) : (__Local__251));
	auto __Local__254 = FSlateBrush{};
	FSlateBrush  __Local__253 = __Local__254;
	bpv__DefaultxStylexHovered__pfTT = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Hovered) : (__Local__253));
	auto __Local__256 = FSlateBrush{};
	FSlateBrush  __Local__255 = __Local__256;
	bpv__StylexOnxTab__pfTT = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.Pressed) : (__Local__255));
	auto __Local__258 = FSlateSound{};
	FSlateSound  __Local__257 = __Local__258;
	bpv__StylexPressedxSound__pfTT = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.PressedSlateSound) : (__Local__257));
	auto __Local__260 = FSlateSound{};
	FSlateSound  __Local__259 = __Local__260;
	bpv__StylexHoveredxSound__pfTT = ((::IsValid(bpv__Tab8__pf)) ? (bpv__Tab8__pf->WidgetStyle.HoveredSlateSound) : (__Local__259));
	return; // KCST_GotoReturn
}
void USwitcher_C__pf517162645::bpf__CreateGraphsByMenuGI__pf()
{
	bpf__ExecuteUbergraph_Switcher__pf_0(45);
}
void USwitcher_C__pf517162645::bpf__LeftByButton__pf()
{
	bpf__ExecuteUbergraph_Switcher__pf_1(39);
}
void USwitcher_C__pf517162645::bpf__IndexRIghtByButton__pf()
{
	bpf__ExecuteUbergraph_Switcher__pf_1(32);
}
void USwitcher_C__pf517162645::bpf__ResetPanelBySpeechDetailsPanel__pf()
{
	bpf__ExecuteUbergraph_Switcher__pf_2(31);
}
void USwitcher_C__pf517162645::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Switcher__pf_3(21);
}
void USwitcher_C__pf517162645::bpf__ClearxButtonxColor__pfTT()
{
	UButton* bpfv__CallFunc_Button_Selector_Button____pf{};
	FButtonStyle bpfv__K2Node_MakeStruct_ButtonStyle__pf{};
	bpf__ButtonxSelector__pfT(/*out*/ bpfv__CallFunc_Button_Selector_Button____pf);
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.Normal = bpv__DefaultxStylexNormal__pfTT;
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.Hovered = bpv__DefaultxStylexHovered__pfTT;
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.Pressed = bpv__StylexOnxTab__pfTT;
	const UScriptStruct* __Local__262 = FSlateBrush::StaticStruct();
	uint8* __Local__263 = (uint8*)FMemory_Alloca(__Local__262->GetStructureSize());
	__Local__262->InitializeStruct(__Local__263);
	FSlateBrush& __Local__261 = *reinterpret_cast<FSlateBrush*>(__Local__263);
	__Local__261.ImageSize = FVector2D(0.000000, 0.000000);
	__Local__261.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.Disabled = __Local__261;
	const UScriptStruct* __Local__265 = FMargin::StaticStruct();
	uint8* __Local__266 = (uint8*)FMemory_Alloca(__Local__265->GetStructureSize());
	__Local__265->InitializeStruct(__Local__266);
	FMargin& __Local__264 = *reinterpret_cast<FMargin*>(__Local__266);
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.NormalPadding = __Local__264;
	const UScriptStruct* __Local__268 = FMargin::StaticStruct();
	uint8* __Local__269 = (uint8*)FMemory_Alloca(__Local__268->GetStructureSize());
	__Local__268->InitializeStruct(__Local__269);
	FMargin& __Local__267 = *reinterpret_cast<FMargin*>(__Local__269);
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.PressedPadding = __Local__267;
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.PressedSlateSound = bpv__StylexPressedxSound__pfTT;
	bpfv__K2Node_MakeStruct_ButtonStyle__pf.HoveredSlateSound = bpv__StylexHoveredxSound__pfTT;
	if(::IsValid(bpfv__CallFunc_Button_Selector_Button____pf))
	{
		bpfv__CallFunc_Button_Selector_Button____pf->UButton::SetStyle(bpfv__K2Node_MakeStruct_ButtonStyle__pf);
	}
}
void USwitcher_C__pf517162645::bpf__ButtonxSelector__pfT(/*out*/ UButton*& bpp__Buttonxx__pfTQ)
{
	UButton* bpfv__ButtonReturn__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 0);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 6);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxTabxIndex__pfTT, 7);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__ButtonReturn__pf = bpv__Tab1__pf;
			}
		case 3:
			{
				bpp__Buttonxx__pfTQ = bpfv__ButtonReturn__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__ButtonReturn__pf = bpv__Tab2__pf;
				__CurrentState = 3;
				break;
			}
		case 5:
			{
				bpfv__ButtonReturn__pf = bpv__Tab3__pf;
				__CurrentState = 3;
				break;
			}
		case 6:
			{
				bpfv__ButtonReturn__pf = bpv__Tab4__pf;
				__CurrentState = 3;
				break;
			}
		case 7:
			{
				bpfv__ButtonReturn__pf = bpv__Tab5__pf;
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				bpfv__ButtonReturn__pf = bpv__Tab6__pf;
				__CurrentState = 3;
				break;
			}
		case 9:
			{
				bpfv__ButtonReturn__pf = bpv__Tab7__pf;
				__CurrentState = 3;
				break;
			}
		case 10:
			{
				bpfv__ButtonReturn__pf = bpv__Tab8__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void USwitcher_C__pf517162645::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USwitcher_C__pf517162645::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameInstance 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelSlot 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Border 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TimelineComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshActor 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MicOn.MicOn 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Mic_Ring.Mic_Ring 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_Cylinder.Microphone_Cylinder 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Stage_Wood.Stage_Wood 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_MainMic.Microphone_MainMic 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Microphone.Microphone 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/ProjectorScreen_Blueprint.ProjectorScreen_Blueprint_C 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C 
		{137, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Effectiveness_Graph.Effectiveness_Graph_C 
		{138, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Fluency_Graph.Fluency_Graph_C 
		{139, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Eye_Contact_Graph.Eye_Contact_Graph_C 
		{140, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Time_Stuttering_Graph.Time_Stuttering_Graph_C 
		{141, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Total_Time_Graph.Total_Time_Graph_C 
		{142, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Percentage_Stuttering_Graph.Percentage_Stuttering_Graph_C 
		{143, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/ListViewData.ListViewData_C 
		{144, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/ResultsForSwitcher.ResultsForSwitcher_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USwitcher_C__pf517162645
{
	FRegisterHelper__USwitcher_C__pf517162645()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher"), &USwitcher_C__pf517162645::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USwitcher_C__pf517162645 Instance;
};
FRegisterHelper__USwitcher_C__pf517162645 FRegisterHelper__USwitcher_C__pf517162645::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
