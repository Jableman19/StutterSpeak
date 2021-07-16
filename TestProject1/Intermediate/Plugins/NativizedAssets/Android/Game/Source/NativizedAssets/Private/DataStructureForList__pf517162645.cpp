#include "NativizedAssets.h"
#include "DataStructureForList__pf517162645.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Blueprint/IUserListEntry.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UDataStructureForList_C__pf517162645::UDataStructureForList_C__pf517162645(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Border_185__pf = nullptr;
	bpv__TextBlock_64__pf = nullptr;
	bpv__TextBlock_96__pf = nullptr;
	bpv__TextBlock_132__pf = nullptr;
	bpv__TextBlock_213__pf = nullptr;
	bpv__TextBlock_261__pf = nullptr;
	bpv__TextBlock_315__pf = nullptr;
	bpv__TextBlock_386__pf = nullptr;
	bpv__AttemptNum__pf = FString(TEXT(""));
	bpv__Time__pf = FString(TEXT(""));
	bpv__TimeStutt__pf = FString(TEXT(""));
	bpv__StuttPercent__pf = FString(TEXT(""));
	bpv__Eye__pf = FString(TEXT(""));
	bpv__Effective__pf = FString(TEXT(""));
	bpv__Fluency__pf = FString(TEXT(""));
	bpv__ListxItemxObject__pfTT = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UDataStructureForList_C__pf517162645::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UDataStructureForList_C__pf517162645::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UBorder>(__Local__0, TEXT("Border_185"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__1->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.102733, 0.615332, 0.723958, 0.593000);
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(1);
	auto __Local__4 = NewObject<UBorderSlot>(__Local__1, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__4->Parent = __Local__1;
	auto __Local__5 = NewObject<UHorizontalBox>(__Local__0, TEXT("HorizontalBox_71"), (EObjectFlags)0x00280008);
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(7);
	auto __Local__7 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_21"), (EObjectFlags)0x00280008);
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_35"), (EObjectFlags)0x00280008);
	__Local__8->WidthOverride = 200.000000f;
	__Local__8->bOverride_WidthOverride = true;
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(1);
	auto __Local__10 = NewObject<USizeBoxSlot>(__Local__8, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__10->Padding.Left = -20.000000f;
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_96"), (EObjectFlags)0x00280008);
	__Local__11->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"B9C4DA14413FA1FBF0D4F5B581033816\", \"Attempt #\")")	);
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__11), UTextLayoutWidget::__PPO__Justification() )));
	__Local__12 = ETextJustify::Type::Center;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__13 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__13->Parent = __Local__5;
	auto __Local__14 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_44"), (EObjectFlags)0x00280008);
	__Local__14->WidthOverride = 215.000000f;
	__Local__14->bOverride_WidthOverride = true;
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(1);
	auto __Local__16 = NewObject<USizeBoxSlot>(__Local__14, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__16->Padding.Left = -20.000000f;
	__Local__16->Parent = __Local__14;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_132"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"CD52E2D54641C4925823E489423DCCBC\", \"Time Taken\")")	);
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__17), UTextLayoutWidget::__PPO__Justification() )));
	__Local__18 = ETextJustify::Type::Center;
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__15.Add(__Local__16);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__6.Add(__Local__13);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__19->Parent = __Local__5;
	auto __Local__20 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_112"), (EObjectFlags)0x00280008);
	__Local__20->WidthOverride = 270.000000f;
	__Local__20->bOverride_WidthOverride = true;
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<USizeBoxSlot>(__Local__20, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__22->Padding.Left = -20.000000f;
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_213"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"C50DD5F448C3D0D5693DE1AA164B71D4\", \"Time Stuttering\")")	);
	auto& __Local__24 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__23), UTextLayoutWidget::__PPO__Justification() )));
	__Local__24 = ETextJustify::Type::Center;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__6.Add(__Local__19);
	auto __Local__25 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__25->Parent = __Local__5;
	auto __Local__26 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_172"), (EObjectFlags)0x00280008);
	__Local__26->WidthOverride = 315.000000f;
	__Local__26->bOverride_WidthOverride = true;
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__27 = TArray<UPanelSlot*> ();
	__Local__27.Reserve(1);
	auto __Local__28 = NewObject<USizeBoxSlot>(__Local__26, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__28->Padding.Left = -20.000000f;
	__Local__28->Parent = __Local__26;
	auto __Local__29 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_64"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"9DEF1A0D4B7969E5FDC8D9BF6E196E63\", \"Stutter Percentage\")")	);
	auto& __Local__30 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__29), UTextLayoutWidget::__PPO__Justification() )));
	__Local__30 = ETextJustify::Type::Center;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__27.Add(__Local__28);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__6.Add(__Local__25);
	auto __Local__31 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__31->Parent = __Local__5;
	auto __Local__32 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_220"), (EObjectFlags)0x00280008);
	__Local__32->WidthOverride = 210.000000f;
	__Local__32->bOverride_WidthOverride = true;
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__32), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<USizeBoxSlot>(__Local__32, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__34->Padding.Left = -25.000000f;
	__Local__34->Parent = __Local__32;
	auto __Local__35 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_261"), (EObjectFlags)0x00280008);
	__Local__35->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"546821D1404E91D2294E8A804AE0FF25\", \"Eye Contact\")")	);
	auto& __Local__36 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__35), UTextLayoutWidget::__PPO__Justification() )));
	__Local__36 = ETextJustify::Type::Center;
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__6.Add(__Local__31);
	auto __Local__37 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_14"), (EObjectFlags)0x00280008);
	__Local__37->Parent = __Local__5;
	auto __Local__38 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_309"), (EObjectFlags)0x00280008);
	__Local__38->WidthOverride = 225.000000f;
	__Local__38->bOverride_WidthOverride = true;
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__38), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(1);
	auto __Local__40 = NewObject<USizeBoxSlot>(__Local__38, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__40->Padding.Left = -40.000000f;
	__Local__40->Parent = __Local__38;
	auto __Local__41 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_315"), (EObjectFlags)0x00280008);
	__Local__41->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"EE295E6C484B6BDF50782A972D0E8660\", \"Effectiveness\")")	);
	auto& __Local__42 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__41), UTextLayoutWidget::__PPO__Justification() )));
	__Local__42 = ETextJustify::Type::Center;
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__39.Add(__Local__40);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__6.Add(__Local__37);
	auto __Local__43 = NewObject<UHorizontalBoxSlot>(__Local__5, TEXT("HorizontalBoxSlot_17"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__5;
	auto __Local__44 = NewObject<USizeBox>(__Local__0, TEXT("SizeBox_356"), (EObjectFlags)0x00280008);
	__Local__44->WidthOverride = 150.000000f;
	__Local__44->bOverride_WidthOverride = true;
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(1);
	auto __Local__46 = NewObject<USizeBoxSlot>(__Local__44, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__46->Padding.Left = -30.000000f;
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_386"), (EObjectFlags)0x00280008);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[CC79AA634F43C0FBBEF9E89D550FA9D2]\", \"9BB0CD114AE5405F7DEBA4A57307887F\", \"Fluency\")")	);
	auto& __Local__48 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__47), UTextLayoutWidget::__PPO__Justification() )));
	__Local__48 = ETextJustify::Type::Center;
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__6.Add(__Local__43);
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UDataStructureForList_C__pf517162645::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__49;
	SlotNames.Append(__Local__49);
}
void UDataStructureForList_C__pf517162645::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__50;
	TArray<FDelegateRuntimeBinding>  __Local__51;
	__Local__51.AddUninitialized(8);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__51.GetData(), 8);
	auto& __Local__52 = __Local__51[0];
	__Local__52.ObjectName = FString(TEXT("TextBlock_96"));
	__Local__52.PropertyName = FName(TEXT("Text"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__52.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__53 = TArray<FPropertyPathSegment> ();
	__Local__53.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__53.GetData(), 1);
	auto& __Local__54 = __Local__53[0];
	__Local__54.Name = FName(TEXT("AttemptNum"));
	__Local__52.Kind = EBindingKind::Property;
	auto& __Local__55 = __Local__51[1];
	__Local__55.ObjectName = FString(TEXT("TextBlock_132"));
	__Local__55.PropertyName = FName(TEXT("Text"));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__55.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__56 = TArray<FPropertyPathSegment> ();
	__Local__56.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__56.GetData(), 1);
	auto& __Local__57 = __Local__56[0];
	__Local__57.Name = FName(TEXT("Time"));
	__Local__55.Kind = EBindingKind::Property;
	auto& __Local__58 = __Local__51[2];
	__Local__58.ObjectName = FString(TEXT("TextBlock_213"));
	__Local__58.PropertyName = FName(TEXT("Text"));
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__58.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__59 = TArray<FPropertyPathSegment> ();
	__Local__59.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__59.GetData(), 1);
	auto& __Local__60 = __Local__59[0];
	__Local__60.Name = FName(TEXT("TimeStutt"));
	__Local__58.Kind = EBindingKind::Property;
	auto& __Local__61 = __Local__51[3];
	__Local__61.ObjectName = FString(TEXT("TextBlock_64"));
	__Local__61.PropertyName = FName(TEXT("Text"));
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__61.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__62 = TArray<FPropertyPathSegment> ();
	__Local__62.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__62.GetData(), 1);
	auto& __Local__63 = __Local__62[0];
	__Local__63.Name = FName(TEXT("StuttPercent"));
	__Local__61.Kind = EBindingKind::Property;
	auto& __Local__64 = __Local__51[4];
	__Local__64.ObjectName = FString(TEXT("TextBlock_261"));
	__Local__64.PropertyName = FName(TEXT("Text"));
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__64.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__65 = TArray<FPropertyPathSegment> ();
	__Local__65.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__65.GetData(), 1);
	auto& __Local__66 = __Local__65[0];
	__Local__66.Name = FName(TEXT("Eye"));
	__Local__64.Kind = EBindingKind::Property;
	auto& __Local__67 = __Local__51[5];
	__Local__67.ObjectName = FString(TEXT("TextBlock_315"));
	__Local__67.PropertyName = FName(TEXT("Text"));
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__67.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__68 = TArray<FPropertyPathSegment> ();
	__Local__68.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__68.GetData(), 1);
	auto& __Local__69 = __Local__68[0];
	__Local__69.Name = FName(TEXT("Effective"));
	__Local__67.Kind = EBindingKind::Property;
	auto& __Local__70 = __Local__51[6];
	__Local__70.ObjectName = FString(TEXT("TextBlock_386"));
	__Local__70.PropertyName = FName(TEXT("Text"));
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__70.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__71 = TArray<FPropertyPathSegment> ();
	__Local__71.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__71.GetData(), 1);
	auto& __Local__72 = __Local__71[0];
	__Local__72.Name = FName(TEXT("Fluency"));
	__Local__70.Kind = EBindingKind::Property;
	auto& __Local__73 = __Local__51[7];
	__Local__73.ObjectName = FString(TEXT("Border_185"));
	__Local__73.PropertyName = FName(TEXT("Background"));
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__73.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__74 = TArray<FPropertyPathSegment> ();
	__Local__74.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__74.GetData(), 1);
	auto& __Local__75 = __Local__74[0];
	__Local__75.Name = FName(TEXT("BGColor"));
	__Local__73.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UDataStructureForList_C__pf517162645::StaticClass())->MiscConvertedSubobjects[0]), __Local__50, __Local__51);
}
void UDataStructureForList_C__pf517162645::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UDataStructureForList_C__pf517162645::bpf__ExecuteUbergraph_DataStructureForList__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	return; // KCST_GotoReturn
}
void UDataStructureForList_C__pf517162645::bpf__ExecuteUbergraph_DataStructureForList__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	return; // KCST_GotoReturn
}
void UDataStructureForList_C__pf517162645::bpf__ExecuteUbergraph_DataStructureForList__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	return; // KCST_GotoReturn
}
void UDataStructureForList_C__pf517162645::bpf__ExecuteUbergraph_DataStructureForList__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void UDataStructureForList_C__pf517162645::bpf__OnListItemObjectSet__pf(UObject* bpp__ListItemObject__pf)
{
	b0l__K2Node_Event_ListItemObject__pf = bpp__ListItemObject__pf;
	bpf__ExecuteUbergraph_DataStructureForList__pf_3(1);
}
void UDataStructureForList_C__pf517162645::bpf__BP_OnItemSelectionChanged__pf(bool bpp__bIsSelected__pf)
{
	b0l__K2Node_Event_bIsSelected__pf = bpp__bIsSelected__pf;
	bpf__ExecuteUbergraph_DataStructureForList__pf_0(4);
}
void UDataStructureForList_C__pf517162645::bpf__BP_OnItemExpansionChanged__pf(bool bpp__bIsExpanded__pf)
{
	b0l__K2Node_Event_bIsExpanded__pf = bpp__bIsExpanded__pf;
	bpf__ExecuteUbergraph_DataStructureForList__pf_1(3);
}
void UDataStructureForList_C__pf517162645::bpf__BP_OnEntryReleased__pf()
{
	bpf__ExecuteUbergraph_DataStructureForList__pf_2(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void UDataStructureForList_C__pf517162645::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UDataStructureForList_C__pf517162645::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{46, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UDataStructureForList_C__pf517162645
{
	FRegisterHelper__UDataStructureForList_C__pf517162645()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"), &UDataStructureForList_C__pf517162645::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDataStructureForList_C__pf517162645 Instance;
};
FRegisterHelper__UDataStructureForList_C__pf517162645 FRegisterHelper__UDataStructureForList_C__pf517162645::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
