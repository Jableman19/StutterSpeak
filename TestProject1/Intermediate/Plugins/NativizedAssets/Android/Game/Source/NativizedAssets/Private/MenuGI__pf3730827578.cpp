#include "NativizedAssets.h"
#include "MenuGI__pf3730827578.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintAsyncActionBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveData__pf1234790197.h"
#include "SettingsSavaData__pf1234790197.h"
#include "Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h"
#include "ProjectorScreen_Blueprint__pf3730827578.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Speech_Details_Pannel__pf4267528607.h"
#include "Switcher__pf517162645.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMenuGI_C__pf3730827578::UMenuGI_C__pf3730827578(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__PagesArray__pf = TArray<FString> ();
	bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT = FString(TEXT(""));
	bpv__DataxtoxSavexxxAttemptxx__pfTTT3TTQ = 0;
	bpv__DataxtoxSavexxxTotalxTimexTaken__pfTTT3TTT = 0.000000f;
	bpv__DataxtoxSavexxxTotalxTimexStuttering__pfTTT3TTT = 0.000000f;
	bpv__DataxtoxSavexxxAudiencexLookingxx__pfTTT3TTTO = 105;
	bpv__DataxtoxSavexxxSatisfacationxRating__pfTTT3TT = 0;
	bpv__DataxtoxSavexxxFluencyxSatisfactionxRating__pfTTT3TTT = 0;
	bpv__DataxtoxSavexxxMessagexSatisfacationxRating__pfTTT3TTT = 0;
	bpv__AttemptsxOfxSelectedxSpeech__pfTTT = TArray<FAttempt_Struct__pf3774553483> ();
	bpv__Match_Found_To_Save_Data__pf = false;
	bpv__Match_Found_To_Load_Data__pf = false;
	bpv__RotationxOffset__pfT = 0.000000f;
	bpv__LoadedxDataxtoxOverwrite__pfTTT = nullptr;
	bpv__DataxtoxLoad__pfTT = nullptr;
	bpv__LocalxAttemptxNumber__pfTT = 0;
	bpv__TextSize__pf = FString(TEXT("Small"));
	bpv__MenuMusic__pf = true;
	bpv__Ambience__pf = false;
	bpv__Applause__pf = true;
	bpv__StutterButtonOn__pf = true;
	bpv__MicrophoneColor__pf = true;
	bpv__AsxSettingsxSavaxData__pfTTT = nullptr;
	bpv__SettingsxtoxLoad__pfTT = nullptr;
	bpv__EraseablexSavexData__pfTT = nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMenuGI_C__pf3730827578::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMenuGI_C__pf3730827578::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(USaveData_C__pf1234790197::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USettingsSavaData_C__pf1234790197::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USpeech_Details_Pannel_C__pf4267528607::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USwitcher_C__pf517162645::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483());
	extern UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf{};
	USaveData_C__pf1234790197* bpfv__CallFunc_CreateSaveGameObject_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_6__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpv__EraseablexSavexData__pfTT, FString(TEXT("Theoretically")), 0);
			}
		case 2:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_12__pf.BindUFunction(this,FName(TEXT("Completed_4191AEB14B4F933E561BB79743D77D5B")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_12__pf);
				}
			}
		case 4:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue__pf->Activate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 113:
			{
				__CurrentState = 114;
				break;
			}
		case 114:
			{
				b0l__Temp_object_Variable_10__pf = b0l__K2Node_CustomEvent_SaveGame_3__pf;
			}
		case 115:
			{
				b0l__Temp_bool_Variable_10__pf = b0l__K2Node_CustomEvent_bSuccess_3__pf;
			}
		case 116:
			{
				b0l__K2Node_DynamicCast_AsSave_Data_2__pf = Cast<USaveData_C__pf1234790197>(b0l__Temp_object_Variable_10__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsSave_Data_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = 127;
					break;
				}
			}
		case 117:
			{
				bpv__EraseablexSavexData__pfTT = b0l__K2Node_DynamicCast_AsSave_Data_2__pf;
			}
		case 118:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf = false;
			}
		case 119:
			{
				b0l__Temp_int_Loop_Counter_Variable_3__pf = 0;
			}
		case 120:
			{
				b0l__Temp_int_Array_Index_Variable_3__pf = 0;
			}
		case 121:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable_2__pf);
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__0 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_6__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__EraseablexSavexData__pfTT)) ? (bpv__EraseablexSavexData__pfTT->bpv__All_Saved_Data__pf) : (__Local__0)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_3__pf, bpfv__CallFunc_Array_Length_ReturnValue_6__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_2__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_4__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_3__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 122:
			{
				b0l__Temp_int_Array_Index_Variable_3__pf = b0l__Temp_int_Loop_Counter_Variable_3__pf;
			}
		case 123:
			{
				__StateStack.Push(126);
			}
		case 124:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__1 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__EraseablexSavexData__pfTT)) ? (bpv__EraseablexSavexData__pfTT->bpv__All_Saved_Data__pf) : (__Local__1)), b0l__Temp_int_Array_Index_Variable_3__pf, /*out*/ b0l__CallFunc_Array_Get_Item_6__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(b0l__K2Node_CustomEvent_Custom_File_Names__pf, b0l__CallFunc_Array_Get_Item_6__pf.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 125;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 125:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__2 = {};
				FCustomThunkTemplates::Array_Remove(((::IsValid(bpv__EraseablexSavexData__pfTT)) ? (bpv__EraseablexSavexData__pfTT->bpv__All_Saved_Data__pf) : (__Local__2)), b0l__Temp_int_Array_Index_Variable_3__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 126:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 121;
				break;
			}
		case 127:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue_2__pf = CastChecked<USaveData_C__pf1234790197>(UGameplayStatics::CreateSaveGameObject(USaveData_C__pf1234790197::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 128:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpfv__CallFunc_CreateSaveGameObject_ReturnValue_2__pf, FString(TEXT("Theoretically")), 0);
			}
		case 129:
			{
				b0l__CallFunc_IsValid_ReturnValue_14__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_14__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 130:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_10__pf.BindUFunction(this,FName(TEXT("Completed_BC6B27B84C2547596E5562A487D52AE2")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_10__pf);
				}
			}
		case 131:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_6__pf->Activate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 143:
			{
				__CurrentState = 144;
				break;
			}
		case 144:
			{
				b0l__Temp_object_Variable_12__pf = b0l__K2Node_CustomEvent_SaveGame_1__pf;
			}
		case 145:
			{
				b0l__Temp_bool_Variable_12__pf = b0l__K2Node_CustomEvent_bSuccess_1__pf;
			}
		case 146:
			{
				b0l__K2Node_DynamicCast_AsSave_Data_3__pf = Cast<USaveData_C__pf1234790197>(b0l__Temp_object_Variable_12__pf);
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsSave_Data_3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 147:
			{
				bpv__EraseablexSavexData__pfTT = b0l__K2Node_DynamicCast_AsSave_Data_3__pf;
				__CurrentState = 118;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Add_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 198);
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
	UGameplayStatics::GetAllActorsOfClass(this, AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass(), /*out*/ TArrayCaster<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
	b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf = Cast<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218>(b0l__CallFunc_Array_Get_Item_1__pf);
	b0l__K2Node_DynamicCast_bSuccess_8__pf = (b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf))
	{
		b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf->bpf__GetxTotalxStutterxTime__pfTTT();
	}
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf = bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf = bpv__DataxtoxSavexxxAttemptxx__pfTTT3TTQ;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf = bpv__DataxtoxSavexxxTotalxTimexTaken__pfTTT3TTT;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf = bpv__DataxtoxSavexxxTotalxTimexStuttering__pfTTT3TTT;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf = bpv__DataxtoxSavexxxAudiencexLookingxx__pfTTT3TTTO;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf = bpv__DataxtoxSavexxxMessagexSatisfacationxRating__pfTTT3TTT;
	b0l__K2Node_MakeStruct_Attempt_Struct__pf.bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf = bpv__DataxtoxSavexxxFluencyxSatisfactionxRating__pfTTT3TTT;
	bpv__DataxtoxSave__pfTT = b0l__K2Node_MakeStruct_Attempt_Struct__pf;
	bpfv__CallFunc_Array_Add_ReturnValue_3__pf = FCustomThunkTemplates::Array_Add(bpv__AttemptsxOfxSelectedxSpeech__pfTTT, bpv__DataxtoxSave__pfTT);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Theoretically")), 0);
	b0l__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_14__pf.BindUFunction(this,FName(TEXT("Completed_95176AC24F9EAE697B7116BD4080F473")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_14__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_7__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 217);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Theoretically")), 0);
	b0l__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_9__pf.BindUFunction(this,FName(TEXT("Completed_38A7A9F741B63F60565A07BF2C93BB09")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_9__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_5__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 172:
			{
				b0l__Temp_int_Loop_Counter_Variable_2__pf = 0;
			}
		case 173:
			{
				b0l__Temp_int_Array_Index_Variable_4__pf = 0;
			}
		case 174:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__3 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__3)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable_3__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_3__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 182;
					break;
				}
			}
		case 175:
			{
				b0l__Temp_int_Array_Index_Variable_4__pf = b0l__Temp_int_Loop_Counter_Variable_2__pf;
			}
		case 176:
			{
				__StateStack.Push(181);
			}
		case 177:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__4 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__4)), b0l__Temp_int_Array_Index_Variable_4__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT, b0l__CallFunc_Array_Get_Item__pf.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf);
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 178:
			{
				bpv__Match_Found_To_Save_Data__pf = true;
			}
		case 179:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__5 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__5))[b0l__Temp_int_Array_Index_Variable_4__pf].bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf);
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__6 = {};
				FCustomThunkTemplates::Array_Set(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__6))[b0l__Temp_int_Array_Index_Variable_4__pf].bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf, bpv__DataxtoxSave__pfTT, true);
			}
		case 180:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_3__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 181:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 174;
				break;
			}
		case 182:
			{
				if (!bpv__Match_Found_To_Save_Data__pf)
				{
					__CurrentState = 188;
					break;
				}
			}
		case 183:
			{
				bpv__Match_Found_To_Save_Data__pf = false;
			}
		case 184:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpv__LoadedxDataxtoxOverwrite__pfTTT, FString(TEXT("Theoretically")), 0);
			}
		case 185:
			{
				b0l__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_10__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 186:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_13__pf.BindUFunction(this,FName(TEXT("Completed_5F29425C4919824E828FE19D3D16AFDB")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_13__pf);
				}
			}
		case 187:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_2__pf->Activate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 188:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__7 = {};
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__7)), b0l__Temp_struct_Variable__pf);
			}
		case 189:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__8 = {};
				((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__8))[bpfv__CallFunc_Array_Add_ReturnValue__pf].bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT;
			}
		case 190:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__9 = {};
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(((::IsValid(bpv__LoadedxDataxtoxOverwrite__pfTTT)) ? (bpv__LoadedxDataxtoxOverwrite__pfTTT->bpv__All_Saved_Data__pf) : (__Local__9))[bpfv__CallFunc_Array_Add_ReturnValue__pf].bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf, bpv__DataxtoxSave__pfTT);
				__CurrentState = 183;
				break;
			}
		case 194:
			{
				b0l__K2Node_DynamicCast_AsSave_Data_4__pf = Cast<USaveData_C__pf1234790197>(b0l__Temp_object_Variable_14__pf);
				b0l__K2Node_DynamicCast_bSuccess_7__pf = (b0l__K2Node_DynamicCast_AsSave_Data_4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 195:
			{
				bpv__LoadedxDataxtoxOverwrite__pfTTT = b0l__K2Node_DynamicCast_AsSave_Data_4__pf;
			}
		case 196:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_3__pf = false;
				__CurrentState = 172;
				break;
			}
		case 205:
			{
				__CurrentState = 206;
				break;
			}
		case 206:
			{
				b0l__Temp_object_Variable_14__pf = b0l__K2Node_CustomEvent_SaveGame_14__pf;
			}
		case 207:
			{
				b0l__Temp_bool_Variable_14__pf = b0l__K2Node_CustomEvent_bSuccess_14__pf;
				__CurrentState = 194;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 154:
			{
				b0l__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 155:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = 0;
			}
		case 156:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__10 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_5__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__10)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_5__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 163;
					break;
				}
			}
		case 157:
			{
				b0l__Temp_int_Array_Index_Variable_2__pf = b0l__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 158:
			{
				__StateStack.Push(162);
			}
		case 159:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__11 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__11)), b0l__Temp_int_Array_Index_Variable_2__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_2__pf = UKismetStringLibrary::EqualEqual_StrStr(bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT, b0l__CallFunc_Array_Get_Item_5__pf.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf);
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 160:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__12 = {};
				FCustomThunkTemplates::Array_Clear(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__12))[b0l__Temp_int_Array_Index_Variable_2__pf].bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf);
			}
		case 161:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 162:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_1__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 156;
				break;
			}
		case 163:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpv__DataxtoxLoad__pfTT, FString(TEXT("Theoretically")), 0);
			}
		case 164:
			{
				b0l__CallFunc_IsValid_ReturnValue_13__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_13__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 165:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_8__pf.BindUFunction(this,FName(TEXT("Completed_5A192CE14CBC16C19584FF9BE1E6CC62")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_8__pf);
				}
			}
		case 166:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_5__pf->Activate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 167:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
				__CurrentState = 154;
				break;
			}
		case 216:
			{
				__CurrentState = 167;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 191);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
	b0l__K2Node_MakeArray_Array__pf[0] = FString(TEXT(""));
	bpv__PagesArray__pf = b0l__K2Node_MakeArray_Array__pf;
	bpf__LoadxSettingsxData__pfTT();
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 88);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_7__pf = b0l__K2Node_CustomEvent_SaveGame_6__pf;
	b0l__Temp_bool_Variable_7__pf = b0l__K2Node_CustomEvent_bSuccess_6__pf;
	b0l__K2Node_DynamicCast_AsSettings_Sava_Data_2__pf = Cast<USettingsSavaData_C__pf1234790197>(b0l__Temp_object_Variable_7__pf);
	b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsSettings_Sava_Data_2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__AsxSettingsxSavaxData__pfTTT = b0l__K2Node_DynamicCast_AsSettings_Sava_Data_2__pf;
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__TextxSize__pfT = bpv__TextSize__pf;
	}
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__MenuxMusic__pfT = bpv__MenuMusic__pf;
	}
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__Ambience__pf = bpv__Ambience__pf;
	}
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__Applause__pf = bpv__Applause__pf;
	}
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__StutterxButtonxOn__pfTT = bpv__StutterButtonOn__pf;
	}
	if(::IsValid(bpv__AsxSettingsxSavaxData__pfTTT))
	{
		bpv__AsxSettingsxSavaxData__pfTTT->bpv__MicrophonexIndicator__pfT = bpv__MicrophoneColor__pf;
	}
	b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpv__AsxSettingsxSavaxData__pfTTT, FString(TEXT("Settings")), 0);
	b0l__CallFunc_IsValid_ReturnValue_12__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_12__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_7__pf.BindUFunction(this,FName(TEXT("Completed_AF11DD4A4FF3CBD24AB2BF890B8A1850")));
	if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf))
	{
		b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_7__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf))
	{
		b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_4__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 215);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Settings")), 0);
	b0l__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("Completed_F39CAD7C4422325B0A794FAEFEC91A5B")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_2__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_8(int32 bpp__EntryPoint__pf)
{
	USettingsSavaData_C__pf1234790197* bpfv__CallFunc_CreateSaveGameObject_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				b0l__Temp_object_Variable_4__pf = b0l__K2Node_CustomEvent_SaveGame_9__pf;
			}
		case 58:
			{
				b0l__Temp_bool_Variable_4__pf = b0l__K2Node_CustomEvent_bSuccess_9__pf;
			}
		case 59:
			{
				b0l__K2Node_DynamicCast_AsSettings_Sava_Data__pf = Cast<USettingsSavaData_C__pf1234790197>(b0l__Temp_object_Variable_4__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsSettings_Sava_Data__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = 67;
					break;
				}
			}
		case 60:
			{
				bpv__SettingsxtoxLoad__pfTT = b0l__K2Node_DynamicCast_AsSettings_Sava_Data__pf;
			}
		case 61:
			{
				FString  __Local__13 = FString(TEXT(""));
				bpv__TextSize__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__TextxSize__pfT) : (__Local__13));
			}
		case 62:
			{
				bool  __Local__14 = false;
				bpv__MenuMusic__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__MenuxMusic__pfT) : (__Local__14));
			}
		case 63:
			{
				bool  __Local__15 = false;
				bpv__Ambience__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__Ambience__pf) : (__Local__15));
			}
		case 64:
			{
				bool  __Local__16 = false;
				bpv__Applause__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__Applause__pf) : (__Local__16));
			}
		case 65:
			{
				bool  __Local__17 = false;
				bpv__StutterButtonOn__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__StutterxButtonxOn__pfTT) : (__Local__17));
			}
		case 66:
			{
				bool  __Local__18 = false;
				bpv__MicrophoneColor__pf = ((::IsValid(bpv__SettingsxtoxLoad__pfTT)) ? (bpv__SettingsxtoxLoad__pfTT->bpv__MicrophonexIndicator__pfT) : (__Local__18));
				__CurrentState = -1;
				break;
			}
		case 67:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue_1__pf = CastChecked<USettingsSavaData_C__pf1234790197>(UGameplayStatics::CreateSaveGameObject(USettingsSavaData_C__pf1234790197::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 68:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpfv__CallFunc_CreateSaveGameObject_ReturnValue_1__pf, FString(TEXT("Settings")), 0);
			}
		case 69:
			{
				b0l__CallFunc_IsValid_ReturnValue_11__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 70:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_4__pf.BindUFunction(this,FName(TEXT("Completed_7AB285784EFF8EB2ACD1D7AC2A4C6C8E")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_4__pf);
				}
			}
		case 71:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_3__pf->Activate();
				}
				__CurrentState = -1;
				break;
			}
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				b0l__Temp_object_Variable_6__pf = b0l__K2Node_CustomEvent_SaveGame_7__pf;
			}
		case 85:
			{
				b0l__Temp_bool_Variable_6__pf = b0l__K2Node_CustomEvent_bSuccess_7__pf;
			}
		case 86:
			{
				b0l__K2Node_DynamicCast_AsSettings_Sava_Data_1__pf = Cast<USettingsSavaData_C__pf1234790197>(b0l__Temp_object_Variable_6__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsSettings_Sava_Data_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 87:
			{
				bpv__SettingsxtoxLoad__pfTT = b0l__K2Node_DynamicCast_AsSettings_Sava_Data_1__pf;
				__CurrentState = 61;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 208:
			{
				__CurrentState = 209;
				break;
			}
		case 209:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__LocalxAttemptxNumber__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 212;
					break;
				}
			}
		case 210:
			{
				bpv__DataxtoxSavexxxAttemptxx__pfTTT3TTQ = 1;
			}
		case 211:
			{
				bpv__LocalxAttemptxNumber__pfTT = 1;
				__CurrentState = -1;
				break;
			}
		case 212:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Add_IntInt(bpv__LocalxAttemptxNumber__pfTT, 1);
				bpv__DataxtoxSavexxxAttemptxx__pfTTT3TTQ = bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf;
			}
		case 213:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Add_IntInt(bpv__LocalxAttemptxNumber__pfTT, 1);
				bpv__LocalxAttemptxNumber__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue_5__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 214);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Settings")), 0);
	b0l__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_6__pf.BindUFunction(this,FName(TEXT("Completed_07E785FB4CE7D29C3D9995A55A0BBC63")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_6__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_4__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_11(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf{};
	USaveData_C__pf1234790197* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				b0l__Temp_object_Variable_1__pf = b0l__K2Node_CustomEvent_SaveGame_12__pf;
			}
		case 9:
			{
				b0l__Temp_bool_Variable_1__pf = b0l__K2Node_CustomEvent_bSuccess_12__pf;
			}
		case 10:
			{
				b0l__K2Node_DynamicCast_AsSave_Data__pf = Cast<USaveData_C__pf1234790197>(b0l__Temp_object_Variable_1__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsSave_Data__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 11:
			{
				bpv__DataxtoxLoad__pfTT = b0l__K2Node_DynamicCast_AsSave_Data__pf;
			}
		case 12:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = false;
			}
		case 13:
			{
				b0l__Temp_int_Loop_Counter_Variable_4__pf = 0;
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 15:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf);
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__19 = {};
				bpfv__CallFunc_Array_Length_ReturnValue_4__pf = FCustomThunkTemplates::Array_Length(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__19)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable_4__pf, bpfv__CallFunc_Array_Length_ReturnValue_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 16:
			{
				b0l__Temp_int_Array_Index_Variable_1__pf = b0l__Temp_int_Loop_Counter_Variable_4__pf;
			}
		case 17:
			{
				__StateStack.Push(37);
			}
		case 18:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__20 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__20)), b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(b0l__CallFunc_Array_Get_Item_3__pf.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf, bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT);
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpv__Match_Found_To_Load_Data__pf = true;
			}
		case 20:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 21:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 22:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__21 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__21)), b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_Array_Length_ReturnValue_3__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_Array_Get_Item_3__pf.bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 38;
					break;
				}
			}
		case 23:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 24:
			{
				__StateStack.Push(39);
			}
		case 25:
			{
				TArray<FData_For_Each_Speech_Struct__pf3774553483>  __Local__22 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__DataxtoxLoad__pfTT)) ? (bpv__DataxtoxLoad__pfTT->bpv__All_Saved_Data__pf) : (__Local__22)), b0l__Temp_int_Array_Index_Variable_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_Array_Get_Item_3__pf.bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpv__AttemptsxOfxSelectedxSpeech__pfTTT, b0l__CallFunc_Array_Get_Item_4__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<USaveData_C__pf1234790197>(UGameplayStatics::CreateSaveGameObject(USaveData_C__pf1234790197::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 27:
			{
				b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf = UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(this, bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf, FString(TEXT("Theoretically")), 0);
			}
		case 28:
			{
				b0l__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue_9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("Completed_22FC88AC4E77FFC5BE6F90BD8521011B")));
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
			}
		case 30:
			{
				if(::IsValid(b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf))
				{
					b0l__CallFunc_AsyncSaveGameToSlot_ReturnValue_1__pf->Activate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__AttemptsxOfxSelectedxSpeech__pfTTT);
				bpv__LocalxAttemptxNumber__pfTT = bpfv__CallFunc_Array_Length_ReturnValue_1__pf;
			}
		case 32:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_9__pf = (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf))
				{
					bpfv__CallFunc_GetWidget_ReturnValue__pf = b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf = Cast<USpeech_Details_Pannel_C__pf4267528607>(bpfv__CallFunc_GetWidget_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_10__pf = (b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				USwitcher_C__pf517162645*  __Local__23 = ((USwitcher_C__pf517162645*)nullptr);
				b0l__K2Node_DynamicCast_AsSwitcher__pf = Cast<USwitcher_C__pf517162645>(((::IsValid(b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf)) ? (b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf->bpv__Switcher__pf) : (__Local__23)));
				b0l__K2Node_DynamicCast_bSuccess_11__pf = (b0l__K2Node_DynamicCast_AsSwitcher__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsSwitcher__pf))
				{
					b0l__K2Node_DynamicCast_AsSwitcher__pf->bpf__CreateGraphsByMenuGI__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable_4__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable_4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_4__pf;
				__CurrentState = 15;
				break;
			}
		case 38:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 22;
				break;
			}
		case 51:
			{
				__CurrentState = 52;
				break;
			}
		case 52:
			{
				b0l__Temp_object_Variable_3__pf = b0l__K2Node_CustomEvent_SaveGame_10__pf;
			}
		case 53:
			{
				b0l__Temp_bool_Variable_3__pf = b0l__K2Node_CustomEvent_bSuccess_10__pf;
			}
		case 54:
			{
				b0l__K2Node_DynamicCast_AsSave_Data_1__pf = Cast<USaveData_C__pf1234790197>(b0l__Temp_object_Variable_3__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsSave_Data_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				bpv__DataxtoxLoad__pfTT = b0l__K2Node_DynamicCast_AsSave_Data_1__pf;
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 204);
	// optimized KCST_UnconditionalGoto
	FCustomThunkTemplates::Array_Clear(bpv__AttemptsxOfxSelectedxSpeech__pfTTT);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Theoretically")), 0);
	b0l__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Completed_11BACE81460A1E244C4CB689C89AE0F9")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 151);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable__pf = b0l__K2Node_CustomEvent_SaveGame_13__pf;
	b0l__Temp_bool_Variable__pf = b0l__K2Node_CustomEvent_bSuccess_13__pf;
	// optimized KCST_UnconditionalGoto
	if (!b0l__Temp_bool_Variable__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Game Saved")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 10.000000);
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 148);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_13__pf = b0l__K2Node_CustomEvent_SaveGame__pf;
	b0l__Temp_bool_Variable_13__pf = b0l__K2Node_CustomEvent_bSuccess__pf;
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 136);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_11__pf = b0l__K2Node_CustomEvent_SaveGame_2__pf;
	b0l__Temp_bool_Variable_11__pf = b0l__K2Node_CustomEvent_bSuccess_2__pf;
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Theoretically")), 0);
	b0l__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_7__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_11__pf.BindUFunction(this,FName(TEXT("Completed_AD27BA814621C2203F577EA3413F3DE4")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_11__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_6__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 110);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_9__pf = b0l__K2Node_CustomEvent_SaveGame_4__pf;
	b0l__Temp_bool_Variable_9__pf = b0l__K2Node_CustomEvent_bSuccess_4__pf;
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 107);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_8__pf = b0l__K2Node_CustomEvent_SaveGame_5__pf;
	b0l__Temp_bool_Variable_8__pf = b0l__K2Node_CustomEvent_bSuccess_5__pf;
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 76);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_5__pf = b0l__K2Node_CustomEvent_SaveGame_8__pf;
	b0l__Temp_bool_Variable_5__pf = b0l__K2Node_CustomEvent_bSuccess_8__pf;
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Settings")), 0);
	b0l__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_5__pf.BindUFunction(this,FName(TEXT("Completed_F12F0CBF49CDFA716362919939ECD365")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_5__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_3__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__ExecuteUbergraph_MenuGI__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_object_Variable_2__pf = b0l__K2Node_CustomEvent_SaveGame_11__pf;
	b0l__Temp_bool_Variable_2__pf = b0l__K2Node_CustomEvent_bSuccess_11__pf;
	b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf = UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(this, FString(TEXT("Theoretically")), 0);
	b0l__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("Completed_CD1611F44C5E36496FEF749BB02A3D71")));
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf->Completed.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
	}
	if(::IsValid(b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf))
	{
		b0l__CallFunc_AsyncLoadGameFromSlot_ReturnValue_1__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UMenuGI_C__pf3730827578::bpf__DeleteExtraDataByMenuWorld__pf(TArray<FString> const& bpp__CustomxFilexNames__pfTT__const)
{
	typedef TArray<FString>  T__Local__24;
	T__Local__24& bpp__CustomxFilexNames__pfTT = *const_cast<T__Local__24 *>(&bpp__CustomxFilexNames__pfTT__const);
	b0l__K2Node_CustomEvent_Custom_File_Names__pf = bpp__CustomxFilexNames__pfTT;
	bpf__ExecuteUbergraph_MenuGI__pf_2(217);
}
void UMenuGI_C__pf3730827578::bpf__DeleteSpeechDataByResetButton__pf()
{
	bpf__ExecuteUbergraph_MenuGI__pf_4(216);
}
void UMenuGI_C__pf3730827578::bpf__LoadxSettingsxData__pfTT()
{
	bpf__ExecuteUbergraph_MenuGI__pf_7(215);
}
void UMenuGI_C__pf3730827578::bpf__SavingSettingsDataBySettingsMenu__pf()
{
	bpf__ExecuteUbergraph_MenuGI__pf_10(214);
}
void UMenuGI_C__pf3730827578::bpf__SetAttemptNumberByStartSpeech__pf()
{
	bpf__ExecuteUbergraph_MenuGI__pf_9(208);
}
void UMenuGI_C__pf3730827578::bpf__MenuGIDataLoadedByFloppyText__pf()
{
	bpf__ExecuteUbergraph_MenuGI__pf_12(204);
}
void UMenuGI_C__pf3730827578::bpf__CallxSavingxData__pfTT()
{
	bpf__ExecuteUbergraph_MenuGI__pf_1(198);
}
void UMenuGI_C__pf3730827578::bpf__ReceiveInit__pf()
{
	bpf__ExecuteUbergraph_MenuGI__pf_5(191);
}
void UMenuGI_C__pf3730827578::bpf__Completed_4191AEB14B4F933E561BB79743D77D5B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_14(148);
}
void UMenuGI_C__pf3730827578::bpf__Completed_AD27BA814621C2203F577EA3413F3DE4__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_1__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_1__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_0(143);
}
void UMenuGI_C__pf3730827578::bpf__Completed_BC6B27B84C2547596E5562A487D52AE2__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_2__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_2__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_15(136);
}
void UMenuGI_C__pf3730827578::bpf__Completed_38A7A9F741B63F60565A07BF2C93BB09__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_3__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_3__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_0(113);
}
void UMenuGI_C__pf3730827578::bpf__Completed_5A192CE14CBC16C19584FF9BE1E6CC62__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_4__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_4__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_16(110);
}
void UMenuGI_C__pf3730827578::bpf__Completed_AF11DD4A4FF3CBD24AB2BF890B8A1850__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_5__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_5__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_17(107);
}
void UMenuGI_C__pf3730827578::bpf__Completed_07E785FB4CE7D29C3D9995A55A0BBC63__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_6__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_6__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_6(88);
}
void UMenuGI_C__pf3730827578::bpf__Completed_F12F0CBF49CDFA716362919939ECD365__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_7__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_7__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_8(83);
}
void UMenuGI_C__pf3730827578::bpf__Completed_7AB285784EFF8EB2ACD1D7AC2A4C6C8E__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_8__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_8__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_18(76);
}
void UMenuGI_C__pf3730827578::bpf__Completed_F39CAD7C4422325B0A794FAEFEC91A5B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_9__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_9__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_8(56);
}
void UMenuGI_C__pf3730827578::bpf__Completed_CD1611F44C5E36496FEF749BB02A3D71__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_10__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_10__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_11(51);
}
void UMenuGI_C__pf3730827578::bpf__Completed_22FC88AC4E77FFC5BE6F90BD8521011B__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_11__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_11__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_19(44);
}
void UMenuGI_C__pf3730827578::bpf__Completed_11BACE81460A1E244C4CB689C89AE0F9__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_12__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_12__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_11(7);
}
void UMenuGI_C__pf3730827578::bpf__Completed_5F29425C4919824E828FE19D3D16AFDB__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_13__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_13__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_13(151);
}
void UMenuGI_C__pf3730827578::bpf__Completed_95176AC24F9EAE697B7116BD4080F473__pf(USaveGame* bpp__SaveGame__pf, bool bpp__bSuccess__pf)
{
	b0l__K2Node_CustomEvent_SaveGame_14__pf = bpp__SaveGame__pf;
	b0l__K2Node_CustomEvent_bSuccess_14__pf = bpp__bSuccess__pf;
	bpf__ExecuteUbergraph_MenuGI__pf_3(205);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMenuGI_C__pf3730827578::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMenuGI_C__pf3730827578::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MicOn.MicOn 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Mic_Ring.Mic_Ring 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_Cylinder.Microphone_Cylinder 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Stage_Wood.Stage_Wood 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_MainMic.Microphone_MainMic 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Microphone.Microphone 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/SaveData/SaveData.SaveData_C 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/SaveData/SettingsSavaData.SettingsSavaData_C 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint.Stutter_Timer__Empty_Object__Blueprint_C 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/ProjectorScreen_Blueprint.ProjectorScreen_Blueprint_C 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher.Switcher_C 
		{162, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct.Data_For_Each_Speech_Struct 
		{0, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMenuGI_C__pf3730827578
{
	FRegisterHelper__UMenuGI_C__pf3730827578()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Blueprints/MenuGI"), &UMenuGI_C__pf3730827578::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMenuGI_C__pf3730827578 Instance;
};
FRegisterHelper__UMenuGI_C__pf3730827578 FRegisterHelper__UMenuGI_C__pf3730827578::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
