#include "NativizedAssets.h"
#include "MenuWorldLevelHolder__pf1711902218.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
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
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
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
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "TriggerBox_MenuWorld__pf2552470103.h"
#include "MenuGI__pf3730827578.h"
#include "MotionControllerPawn__pf3611121690.h"
#include "MusicManager_Blueprint__pf1711902218.h"
#include "LeftButton__pf2198246146.h"
#include "RightButton__pf2198246146.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "TestProject1/ReadWriter.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AMenuWorldLevelHolder_C__pf1711902218::AMenuWorldLevelHolder_C__pf1711902218(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__Fade_in_Out_NewTrack_0_0C0423C249CB7FECA1352D919E3026BE__pf = 0.000000f;
	bpv__Fade_in_Out__Direction_0C0423C249CB7FECA1352D919E3026BE__pf = ETimelineDirection::Type::Forward;
	bpv__FadexinxOut__pfTE = nullptr;
	bpv__StringxNames__pfT = TArray<FString> ();
	bpv__StringxNames__pfT.Reserve(10);
	bpv__StringxNames__pfT.Add(FString(TEXT("Grandfather Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Dream Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Rainbow Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("The King's Speech - King George VI")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Joey's Birthday Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("The Big Red Building Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Johnny Sets the Table Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Bugsy Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("My Cheerio Catastrophe Passage")));
	bpv__StringxNames__pfT.Add(FString(TEXT("Women in Science and Aviation - Amelia Earhart")));
	bpv__DefaultxStrings__pfT = TArray<FString> ();
	bpv__DefaultxStrings__pfT.Reserve(10);
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("You wish to know all about my grandfather. Well, he is nearly 93 years old, yet he still thinks as swiftly as ever. He dresses himself in an old black frock coat, usually several buttons missing. A long beard clings to his chin, giving those who observe hi")
TEXT("m a pronounced feeling of the utmost respect. When he speaks, his voice is just a bit cracked and quivers a bit. Twice each day he plays skillfully and with zest upon a small organ. Except in the winter when the snow or ice prevents, he slowly takes a shor")
TEXT("t walk in the open air each day. We have often urged him to walk more and smoke less, but he always answers, \u201cBanana oil!\u201d Grandfather likes to be modern in his language.")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("If you can dream \u2013 and not make dreams your master:\r\nIf you can think \u2013 and not make thoughts your aim,\r\nIf you can meet with triumph and disaster\r\nAnd treat those two impostors just the same;\r\nIf you can bear to hear the truth you\u2019v")
TEXT("e spoken\r\nTwisted by knaves to make a trap for fools,\r\nOr watch the things you gave your life to, broken,\r\nAnd stoop and build\u2019em up with worn-out tools;\r\nIf you can fill the unforgiving minute\r\nWith sixty second\u2019s worth of distance run")
TEXT(":\r\nYours is the earth and everything that\u2019s in it,\r\nand \u2013 which is more \u2013 you\u2019ll be a Man, my son!")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("When sunlight strikes raindrops in the air, they act like a prism and form a rainbow. The rainbow is a division of white light into many beautiful colors. These take the shape of a long round arch, with its path high above, and its two ends apparently beyo")
TEXT("nd the horizon. There is, according to legend, a boiling pot of gold at one end. People look but no one ever finds it. When a man looks for something beyond his reach, his friends say he is looking for the pot of gold at the end of the rainbow. Throughout ")
TEXT("the centuries men have explained the rainbow in various ways. Some have accepted it as a miracle without physical explanation. To the Hebrews it was a token that there would be no more universal floods. The Greeks used to imagine that it was a sign from th")
TEXT("e gods to foretell war or heavy rain. The Norsemen considered the rainbow as a bridge over which the gods passed from the earth to their home in the sky. Other men have tried to explain the phenomenon physically. Aristotle thought that the rainbow was caus")
TEXT("ed by reflection of the sun\u2019s rays by the rain. Since then physicists have found that it is not the reflection, but refraction by the raindrops which causes the rainbow. Many complicated ideas about the rainbow have been formed. The difference in the ")
TEXT("rainbow depends considerably upon the size of the water drops, and the width of the colored band increases as the size of the drops increases.The actual primary rainbow observed is said to be the effect of superposition of a number of bows. If the red of t")
TEXT("he second bow falls upon the green of the first, the result is to give a bow with an abnormally wide yellow band, since red and green light when mixed form yellow. This is a very common type of bow, one showing mainly red and yellow, with little or no gree")
TEXT("n or blue.\r\n\r\n")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("In this grave hour, perhaps the most fateful in our history, I send to every household of my peoples, both at home and overseas, this message, spoken with the same depth of feeling for each one of you as if I were able to cross your threshold and speak to ")
TEXT("you myself. For the second time in the lives of most of us we are at war. Over and over again we have tried to find a peaceful way out of the differences between ourselves and those who are now our enemies. But it has been in vain. We have been forced into")
TEXT(" a conflict. For we are called, with our allies, to meet the challenge of a principle which, if it were to prevail, would be fatal to any civilized order in the world. It is the principle which permits a state, in the selfish pursuit of power, to disregard")
TEXT(" its treaties and its solemn pledges; which sanctions the use of force, or threat of force, against the sovereignty and independence of other states. Such a principle, stripped of all disguise, is surely the mere primitive doctrine that \"might is right\";")
TEXT(" and if this principle were established throughout the world, the freedom of our own country and of the whole of the British Commonwealth of Nations would be in danger. But far more than this -- the peoples of the world would be kept in the bondage of fear")
TEXT(", and all hopes of settled peace and of the security of justice and liberty among nations would be ended. This is the ultimate issue which confronts us. For the sake of all that we ourselves hold dear, and of the world order and peace, it is unthinkable th")
TEXT("at we should refuse to meet the challenge. It is to this high purpose that I now call my people at home and my peoples across the seas, who will make our cause their own. I ask them to stand calm and firm and united in this time of trial. The task will be ")
TEXT("hard. There may be dark days ahead, and war can no longer be confined to the battlefield. But we can only do the right as we see the right, and reverently commit our cause to God. If one and all we keep resolutely faithful to it, ready for whatever service")
TEXT(" or sacrifice it may demand, then, with God's help, we shall prevail. May He bless and keep us all.")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("Joey's birthday was coming up on Saturday and he really wanted to have a party. Every day for a week he asked his parents, \"Can I please have a party? I don't even need presents, just a party.\" His parents always said, \"No Joey I don't think so,\" and t")
TEXT("hen asked a question like, \"If you were going to have a party, what would you do?\"  Joey said, \"Swim in the hot tub.\" The next time he asked for a party, they said, \"No I'm sorry, but if you were going to have a party, what would you eat?\" Joey sadly")
TEXT(" said, \"Pizza and blue cake.\" Even though they said no, Joey kept asking. Joey woke up on his birthday morning and decided to stay in bed. He wanted to keep thinking about his dream party. He pictured his friends eating pizza and swimming in the hot tub ")
TEXT("in his backyard. A blue cake was on the table and mint ice cream was in the freezer. All of the sudden, he heard the doorbell ring. He waited but nobody answered the door. The doorbell rang again and again. Joey was puzzled why no one answered the door so ")
TEXT("he rolled out of bed and slowly walked to the front door. He opened it and a huge grin spread across his face. All of Joey's friends were standing there in their bathing suits. They yelled, \"SURPRISE!\" and started singing \"Happy Birthday to You!\" Joey'")
TEXT("s friends all came in and went to the kitchen. There was pizza and a big blue cake sitting on the table. Joey said, \"This is my dream party! We are going swimming. There is pizza and blue cake on the table.\" But then he stopped. \"Wait a minute,\" he sai")
TEXT("d and ran to the freezer. Sure enough, there was mint ice cream in the freezer. He turned to his parents and said, \"I never told you about that. How did you know?\"  And they just smiled back and said, \"Happy birthday son!\"")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("One day a lonely bunny was hopping around looking for friends. He saw a big red building in the distance and decided to go exploring. He hopped along until he met a little green bug and he said, \"What's in that big red building green bug?\" But the bug di")
TEXT("dn't answer. So he kept hopping until he came to a little mouse and he asked him the same question, \"What's in that big red building little mouse?\" But the mouse just said, \"Squeak.\" The bunny was getting more and more curious about what was in that bi")
TEXT("g red building. He guessed he had ten more hops to the door when a brown chicken came out. The bunny anxiously said, \"What's in that big, red building brown chicken?\" But the chicken couldn't answer because she had just pecked a worm out of the grass wit")
TEXT("h her beak. The bunny was getting sad because he had made no friends yet, but he got excited as he hopped his last hop through the big red door. It was even bigger than he imagined. And it smelled interesting. Even though it was big and smelled funny, the ")
TEXT("bunny thought it was warm and cozy like home. And then he heard lots of different noises. He was trying to figure out what each noise was when a giant black horse stepped out in front of him. The bunny was scared for just a minute until the horse said, \"W")
TEXT("elcome bunny. What are you looking for?\" The bunny replied, \"I'm looking for friends.\" The horse smiled and whinnied loudly. All of the animals in the big red building came out and gathered around the bunny. The bunny matched all of the noises he heard ")
TEXT("to the animals he saw. The pigs snorted, the sheep baaed, the cows mooed, the goats maaed, and the horses whinnied. The big, black horse said, \"When you're in the barn, you're friends for life.\" And the bunny's heart swelled happily. He said, \"So that's")
TEXT(" what the big red building is: a barn. And that's what's in it...FRIENDS.\" All of the animals made their noises in agreement.")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("Johnny's mom asked him to set the table for dinner. Johnny was a very good boy and he always did everything he was told. He immediately stopped playing his game and went to the kitchen. He counted four plates, four cups, four forks, four spoons, and only t")
TEXT("hree knives because there were four people in his family, but only three of them needed knives. He couldn't use a knife yet because he was too young. His dad always came home in time for dinner. His mom always made delicious food. And his sister, Lexie, al")
TEXT("ways said please and thank you at the dinner table. He was the youngest, but that didn't stop him from being a big help to his family. He set out everything perfectly on the table just like his mom had shown him. He even put napkins by each plate. He tried")
TEXT(" to fold the napkins to look like swans from a fancy restaurant, but he wasn't sure you could tell what they were. He stood back to admire his work and realized that, for the table to be complete, the cups needed water. Johnny found the water pitcher and t")
TEXT("ried to fill it up in the kitchen sink, but the sink was too high. The bathroom sink was also too high so he decided to use the bathtub. Johnny carried the heavy water pitcher to the dining room. He filled the first three cups and felt pretty good because ")
TEXT("he had only spilled a little, here and there. Johnny started to fill up the fourth cup when he slipped on some spilled water. His feet came out from under him and he tumbled to the floor. The water pitcher spilled everywhere and landed in Johnny's lap. He ")
TEXT("got up quickly to look at his beautiful table. Everything was soaking wet including his swan napkins. He was so sad that he started crying. His mom came in and saw the mess. She was going to scold him for playing with water, but then she saw the wet swan n")
TEXT("apkins. She smiled and bent down and gave Johnny a kiss. She scooped him into her arms and said, \"Dry your tears Johnny. Accidents happen to all of us, big and small, short and tall.\" Johnny looked sad. \"Really?\" he asked. And she said, \"Yes. You were")
TEXT(" just being obedient. And I love your swan napkins!\" Johnny smiled so big. \"She saw my swan napkins,\" he thought, \"and I WAS being obedient!\"")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("Katie's best friend was her pet hamster, Bugsy. She named it that because it had little buggy eyes that were so cute. She loved to take care of Bugsy. She gave him fresh food and water every day. And once a week she would put Bugsy in a little box while sh")
TEXT("e cleaned his cage. The best part of cleaning his cage was shredding newspaper to put in the bottom. When she put Bugsy back in his clean cage, Bugsy would always run around a few times and then snuggle up in the newspaper till it made a cute, little nest ")
TEXT("around his body. Then he would go to sleep. One day Katie came home from school and went to Bugsy's cage like she always did. But this time Bugsy was not there. She immediately opened the cage and searched through the shredded newspaper. Bugsy was missing!")
TEXT(" Katie yelled to her mom. Her mom came running and saw Katie crying. \"What's the matter Katie?\" she said. \"It's Bugsy. He's gone, \"cried Katie. Katie's mom said, \"Don't worry. I bet he's just loose in our house somewhere. Let's clean up the house and ")
TEXT("I bet we'll find him.\" Katie and her mom worked hard cleaning up the house. They were finally done except for one pile of laundry, but Bugsy was still missing. Katie started to worry again. But Katie's mom said, \"Fold this laundry and then we can really ")
TEXT("worry.\" Katie didn't want to, but she folded the shirts anyway. Just as she finished folding the pants, Katie saw a pair of underpants wiggling. She whispered, \"Mom look. Those underpants are moving!\" She slowly picked up the underpants and there was Bu")
TEXT("gsy. He was all snuggled up in a pile of socks just like he did in the newspaper. Katie softly grabbed Bugsy and held him to her chest. \"I love you,\" she said, \"Don't ever leave me again.\" Then she looked at his buggy little eyes and said, \"Promise?\"")
TEXT(" And even though Bugsy couldn't talk back, his buggy eyes seemed to say, \"I promise.\"")));
	bpv__DefaultxStrings__pfT.Add(FString(TEXT("One day I was sitting with my sisters eating breakfast. We started to get really silly. My big sister put a spoon on her nose and it stuck there without any hands. My little sister took two forks and put them on her head to look like antlers. Then I decide")
TEXT("d to take a Cheerio from my cereal bowl and put it in my nose. I laughed and said, \"Look at me.\" My sisters looked over and started laughing too. Then I accidently breathed in through my nose and the Cheerio went up inside. I tried to get it out with my ")
TEXT("finger, but the Cheerio just went higher. I started to worry how I was going to get that cheerio out. My mom came in and said, \"Gracie that's gross. Get your finger out of your nose.\" I said, \"But Mom I have a Cheerio in my nose.\" My mom looked inside ")
TEXT("my nose with a flashlight and, sure enough, she saw the Cheerio way up at the top. But it was bigger than normal. It looked like a Cheerio that had been sitting in a bowl of milk and had soaked it all up. My mom worried that if we used tweezers to get it o")
TEXT("ut, the Cheerio would get pushed up inside my head or that it would break into pieces and get sucked inside my head when I took a breath. She also didn't want to take me to the doctor for something as silly as a Cheerio stuck up my nose either. But we didn")
TEXT("'t know what else to do. Just then my mom thought, \"Hey, what if we could suck it out. Hmmm...\" and she left to get a vacuum. My mom came back and said that she was a little scared to use the vacuum hose, but she thought it would work if it wasn't too st")
TEXT("rong. She turned the vacuum on and tested it at the end of her own nose first and nothing bad happened. So she was ready to try it on me. I was still a little scared, but then I thought about what I would look like if I never got the Cheerio out. I picture")
TEXT("d myself with a huge, brown Cheerio-colored head that kept getting bigger and bigger to make room for the soggy, exploded Cheerio inside. I held perfectly still while my mom slowly moved the vacuum hose closer to my nose. It was near the end my nostril for")
TEXT(" a split second when the Cheerio sucked right out and down the tube. It was the best sound ever! All of my sisters and my mom apparently had been holding their breath too because we all let out a huge sigh of relief. My sisters started giggling again and I")
TEXT(" flashed them a goofy smile. My mom looked at us seriously. She was not smiling. \"NEVER, EVER put anything in your nose, or your ears, or your eyes\u00e2\u20ac\u00a6 or anywhere for that matter, again!\" she said. Then she smiled at me and said, \"I'm gla")
TEXT("d you're okay Gracie,\" and gave me big hug.")));
	bpv__DefaultxStrings__pfT.Add(FString(*(FString(TEXT("This modern world of science and invention is a particular interest to women, for the lives of women who have been more affected by its new horizon and those of any other group. Profound in strength, there have been accomplishments in the field of research")
TEXT(", it is in the home that the applications and scientific achievements have perhaps been most far reaching. And it is through changing conditions there that women have become the greatest beneficiaries in the modern scene. Science has released them from muc")
TEXT("h of the age-old drudgery connected with the process of living. Candle dipping, weaving, and crude methods of manufacturing necesities are things of the past for an increasing majority. Today, light, and power may be obtained by pushing buttons and manufac")
TEXT("tured and appealing products of all the world are available at the door . Indeed beyond that door she need not go, thanks to the miracles of modern communication and transportation. Not only as applied science decreased the in the home, but it has provided")
TEXT(" undue new economic opportunities for women. Today, millions of them are earning their living on the conditions made possible only through a basically system. Probably no scientific development is more startling than the access of this new and growing econ")
TEXT("omic independence upon women themselves. When the history of our is written, it must be called as supremely significant for physical, psychic and social changes women have undergone in these exciting decades. The of the sociological evolution of the last h")
TEXT("alf century should be largely credited to those who have toiled in laboratories and those who have translated into practical use the proof of such labors. When we hear from a man that a mechanized world would not be a pleasant one in which to live, quite t")
TEXT("he contrary, it should be true and it can be true if the fine minds have accomplished so much in the realms of applied science will unite with the same enthusiasm to control our creation against social misuse. Obviously, research regarding technological un")
TEXT("employment is as vital today as further refinement or production of labor and comfort living devices. Among all the marvels of modern invention, that with which I am most concerned is, of course, air transportation. Flying is. perhaps the most dramatic of ")
TEXT("recent scientfic attainment. In the brief span of thirty odd years, the world has seen an inventor's dream first materialized by the Wright brothers at Kitty Hawk become an everyday actuality. Perhaps I'm prejudiced, but to me it seems that no other phase ")
TEXT("of modern progress contrives to maintain such a venom of romance and beauty coupled with utility aviation. Within itself, this industry embraces many of those scientific accomplishments which yesterday seemed fantastic impossibilites. The pilot, winging hi")
TEXT("s way above the earth at two hundred miles an hour, talks by radio telephone to ground stations or to other planes in the air. In sick weather he is guided by radio beams and receives detailed reports of conditions ahead through special instruments and new")
TEXT(" methods of meteorological calculations. He sits behind engines in the liability of which measured by yardsticks of the past is all but unbelievable. I, myself, which is carried in over the North Atlantic part of the Pacific to and from Mexico city and the")
TEXT(" many times across this continent. Aviation, this young modern giant, exemplifies the possible relationship of women and the creations of science. Although women as yet have not taken full advantage of its use and benefits, air travel is as available to th")
TEXT("em as to men. As so often happens in introducing the new or changing the old, public acceptance depends particularly upon women than the attitude. In aviation they are arbitrary of whether or not their families shall fly and if such, are a potent influence")
) + FString(TEXT(". within the industry itself for women who work are still greatly outnumbered, they are finding more and more opportunities for employment in the ranks of this latest transportation medium. May I hope this movement will spread throughout all of applied sci")
TEXT("ence and industry and that women may come to share with men the joy of doing can appreciate most who have helped create.")))));
	bpv__StringxRemaining__pfT = FString(TEXT(""));
	bpv__Length__pf = 1250;
	bpv__StartxIndex__pfT = 0;
	bpv__PagexIterator__pfT = 0;
	bpv__LengthChecker__pf = 1250;
	bpv__MAT__pf = nullptr;
	bpv__LevelLoading__pf = false;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMenuWorldLevelHolder_C__pf1711902218::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AMenuWorldLevelHolder_C__pf1711902218::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ATriggerBox_MenuWorld_C__pf2552470103::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMenuGI_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMotionControllerPawn_C__pf3611121690::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMusicManager_Blueprint_C__pf1711902218::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALeftButton_C__pf2198246146::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARightButton_C__pf2198246146::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Fade in/Out_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__3);
	__Local__3->TimelineLength = 2.500000f;
	__Local__3->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__3->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__3->FloatTracks.GetData(), 1);
	auto& __Local__4 = __Local__3->FloatTracks[0];
	auto __Local__5 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	__Local__5->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__5->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__5->FloatCurve.Keys.GetData(), 2);
	auto& __Local__6 = __Local__5->FloatCurve.Keys[0];
	__Local__6.Time = 0.250000f;
	__Local__6.Value = 1.000000f;
	auto& __Local__7 = __Local__5->FloatCurve.Keys[1];
	__Local__7.Time = 2.000000f;
	__Local__4.CurveFloat = __Local__5;
	auto& __Local__8 = (*(AccessPrivateProperty<FName >(&(__Local__4), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__8 = FName(TEXT("Fade_in_Out_NewTrack_0_0C0423C249CB7FECA1352D919E3026BE"));
	auto& __Local__9 = (*(AccessPrivateProperty<FName >(&(__Local__4), FTTTrackBase::__PPO__TrackName() )));
	__Local__9 = FName(TEXT("NewTrack_0"));
	__Local__3->TimelineGuid = FGuid(0x0C0423C2, 0x49CB7FEC, 0xA1352D91, 0x9E3026BE);
	auto& __Local__10 = (*(AccessPrivateProperty<FName >((__Local__3), UTimelineTemplate::__PPO__VariableName() )));
	__Local__10 = FName(TEXT("Fade in/Out"));
	auto& __Local__11 = (*(AccessPrivateProperty<FName >((__Local__3), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__11 = FName(TEXT("Fade_in_Out__Direction_0C0423C249CB7FECA1352D919E3026BE"));
	auto& __Local__12 = (*(AccessPrivateProperty<FName >((__Local__3), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__12 = FName(TEXT("Fade in/Out__UpdateFunc"));
	auto& __Local__13 = (*(AccessPrivateProperty<FName >((__Local__3), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__13 = FName(TEXT("Fade in/Out__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AMenuWorldLevelHolder_C__pf1711902218::bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetCharacterAsNumber_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_GetCharacterAsNumber_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_LoadFileToString_ReturnValue__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue_2__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue_3__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue_4__pf{};
	FString bpfv__CallFunc_GetSubstring_ReturnValue_5__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpf__PlayerCameraRotSave__pf();
			}
		case 4:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("SpeechWorld")), true, FString(TEXT("")));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Length__pf, 1);
				b0l__Temp_int_Variable_3__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf;
			}
		case 7:
			{
				bpv__Length__pf = b0l__Temp_int_Variable_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_GetCharacterAsNumber_ReturnValue_1__pf = UKismetStringLibrary::GetCharacterAsNumber(bpv__StringxRemaining__pfT, bpv__Length__pf);
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetCharacterAsNumber_ReturnValue_1__pf, 32);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = 5;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Len_ReturnValue_3__pf = UKismetStringLibrary::Len(bpv__StringxRemaining__pfT);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue_3__pf, bpv__Length__pf);
				bpfv__CallFunc_GetSubstring_ReturnValue_1__pf = UKismetStringLibrary::GetSubstring(bpv__StringxRemaining__pfT, bpv__Length__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf);
				bpv__StringxRemaining__pfT = bpfv__CallFunc_GetSubstring_ReturnValue_1__pf;
			}
		case 10:
			{
				FString  __Local__14 = FString(TEXT(""));
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpv__StringxNames__pfT, ((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT) : (__Local__14)));
				FCustomThunkTemplates::Array_Get(bpv__DefaultxStrings__pfT, bpfv__CallFunc_Array_Find_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_GetSubstring_ReturnValue_5__pf = UKismetStringLibrary::GetSubstring(b0l__CallFunc_Array_Get_Item_1__pf, bpv__StartxIndex__pfT, bpv__Length__pf);
				TArray<FString>  __Local__15 = {};
				FCustomThunkTemplates::Array_Set(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_2__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_2__pf->bpv__PagesArray__pf) : (__Local__15)), bpv__PagexIterator__pfT, bpfv__CallFunc_GetSubstring_ReturnValue_5__pf, true);
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__PagexIterator__pfT, 1);
				b0l__Temp_int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 12:
			{
				bpv__PagexIterator__pfT = b0l__Temp_int_Variable_2__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__Length__pf, bpv__StartxIndex__pfT);
				bpv__StartxIndex__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 14:
			{
				bpfv__CallFunc_Len_ReturnValue_2__pf = UKismetStringLibrary::Len(bpv__StringxRemaining__pfT);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Len_ReturnValue_2__pf, bpv__LengthChecker__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI_3__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsMenu_GI_3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				FString  __Local__16 = FString(TEXT(""));
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpv__StringxNames__pfT, ((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT) : (__Local__16)));
				FCustomThunkTemplates::Array_Get(bpv__DefaultxStrings__pfT, bpfv__CallFunc_Array_Find_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_GetSubstring_ReturnValue_2__pf = UKismetStringLibrary::GetSubstring(b0l__CallFunc_Array_Get_Item_1__pf, bpv__StartxIndex__pfT, bpv__Length__pf);
				TArray<FString>  __Local__17 = {};
				FCustomThunkTemplates::Array_Set(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_3__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_3__pf->bpv__PagesArray__pf) : (__Local__17)), bpv__PagexIterator__pfT, bpfv__CallFunc_GetSubstring_ReturnValue_2__pf, true);
			}
		case 17:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMotionControllerPawn_C__pf3611121690::StaticClass(), /*out*/ TArrayCaster<AMotionControllerPawn_C__pf3611121690*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf3611121690>(b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AMenuWorldLevelHolder_C__pf1711902218::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
			}
		case 20:
			{
				bpv__MAT__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 21:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__Fader__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__Fader__pf->SetMaterial(0, bpv__MAT__pf);
				}
			}
		case 22:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMusicManager_Blueprint_C__pf1711902218::StaticClass(), /*out*/ TArrayCaster<AMusicManager_Blueprint_C__pf1711902218*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 23:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				b0l__K2Node_DynamicCast_AsMusic_Manager_Blueprint__pf = Cast<AMusicManager_Blueprint_C__pf1711902218>(b0l__CallFunc_Array_Get_Item_3__pf);
				b0l__K2Node_DynamicCast_bSuccess_7__pf = (b0l__K2Node_DynamicCast_AsMusic_Manager_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMusic_Manager_Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsMusic_Manager_Blueprint__pf->bpf__MusicFade__pf();
				}
			}
		case 25:
			{
				if(::IsValid(bpv__FadexinxOut__pfTE))
				{
					bpv__FadexinxOut__pfTE->UTimelineComponent::ReverseFromEnd();
				}
			}
		case 26:
			{
				UKismetSystemLibrary::Delay(this, 2.500000, FLatentActionInfo(2, 579931354, TEXT("ExecuteUbergraph_MenuWorldLevelHolder_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpv__Length__pf = bpv__LengthChecker__pf;
			}
		case 28:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI_2__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsMenu_GI_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 8;
				break;
			}
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				if (!bpv__LevelLoading__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpv__LevelLoading__pf = true;
			}
		case 37:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALeftButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ALeftButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				b0l__K2Node_DynamicCast_AsLeft_Button__pf = Cast<ALeftButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_4__pf);
				b0l__K2Node_DynamicCast_bSuccess_8__pf = (b0l__K2Node_DynamicCast_AsLeft_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 39:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Button__pf->bpv__ButtonOn__pf = false;
				}
			}
		case 40:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ARightButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ARightButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Get<AActor*>());
			}
		case 41:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				b0l__K2Node_DynamicCast_AsRight_Button__pf = Cast<ARightButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_5__pf);
				b0l__K2Node_DynamicCast_bSuccess_9__pf = (b0l__K2Node_DynamicCast_AsRight_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Button__pf->bpv__ButtonOn__pf = false;
				}
			}
		case 43:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI_4__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 44:
			{
				TArray<FString>  __Local__19 = {};
				FCustomThunkTemplates::Array_Clear(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__PagesArray__pf) : (__Local__19)));
			}
		case 45:
			{
				FString  __Local__20 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__TextSize__pf) : (__Local__20)), FString(TEXT("Small")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = 49;
					break;
				}
			}
		case 46:
			{
				bpv__LengthChecker__pf = 1200;
			}
		case 47:
			{
				FString  __Local__21 = FString(TEXT(""));
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpv__StringxNames__pfT, ((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT) : (__Local__21)));
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 48:
			{
				FString  __Local__22 = FString(TEXT(""));
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpv__StringxNames__pfT, ((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT) : (__Local__22)));
				FCustomThunkTemplates::Array_Get(bpv__DefaultxStrings__pfT, bpfv__CallFunc_Array_Find_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpv__StringxRemaining__pfT = b0l__CallFunc_Array_Get_Item_1__pf;
				__CurrentState = 14;
				break;
			}
		case 49:
			{
				FString  __Local__23 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__TextSize__pf) : (__Local__23)), FString(TEXT("Medium")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 50:
			{
				bpv__LengthChecker__pf = 750;
				__CurrentState = 47;
				break;
			}
		case 51:
			{
				bpv__LengthChecker__pf = 525;
				__CurrentState = 47;
				break;
			}
		case 52:
			{
				FString  __Local__24 = FString(TEXT(""));
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_4__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_4__pf->bpv__DataxtoxSavexxxSpeechxName__pfTTT3TT) : (__Local__24)), FString(TEXT(".txt")));
				bpfv__CallFunc_LoadFileToString_ReturnValue__pf = UReadWriter::LoadFileToString(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
			}
		case 53:
			{
				bpv__StringxRemaining__pfT = bpfv__CallFunc_LoadFileToString_ReturnValue__pf;
			}
		case 54:
			{
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpv__StringxRemaining__pfT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, bpv__LengthChecker__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 57;
					break;
				}
			}
		case 55:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsMenu_GI_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 56:
			{
				bpfv__CallFunc_GetSubstring_ReturnValue_3__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_LoadFileToString_ReturnValue__pf, bpv__StartxIndex__pfT, bpv__Length__pf);
				TArray<FString>  __Local__25 = {};
				FCustomThunkTemplates::Array_Set(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI_1__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI_1__pf->bpv__PagesArray__pf) : (__Local__25)), bpv__PagexIterator__pfT, bpfv__CallFunc_GetSubstring_ReturnValue_3__pf, true);
				__CurrentState = 17;
				break;
			}
		case 57:
			{
				bpv__Length__pf = bpv__LengthChecker__pf;
			}
		case 58:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMenu_GI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				bpfv__CallFunc_GetCharacterAsNumber_ReturnValue__pf = UKismetStringLibrary::GetCharacterAsNumber(bpv__StringxRemaining__pfT, bpv__Length__pf);
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetCharacterAsNumber_ReturnValue__pf, 32);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 63;
					break;
				}
			}
		case 60:
			{
				__StateStack.Push(59);
			}
		case 61:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Length__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 62:
			{
				bpv__Length__pf = b0l__Temp_int_Variable__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				bpfv__CallFunc_Len_ReturnValue_1__pf = UKismetStringLibrary::Len(bpv__StringxRemaining__pfT);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Len_ReturnValue_1__pf, bpv__Length__pf);
				bpfv__CallFunc_GetSubstring_ReturnValue__pf = UKismetStringLibrary::GetSubstring(bpv__StringxRemaining__pfT, bpv__Length__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				bpv__StringxRemaining__pfT = bpfv__CallFunc_GetSubstring_ReturnValue__pf;
			}
		case 64:
			{
				bpfv__CallFunc_GetSubstring_ReturnValue_4__pf = UKismetStringLibrary::GetSubstring(bpfv__CallFunc_LoadFileToString_ReturnValue__pf, bpv__StartxIndex__pfT, bpv__Length__pf);
				TArray<FString>  __Local__26 = {};
				FCustomThunkTemplates::Array_Set(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__PagesArray__pf) : (__Local__26)), bpv__PagexIterator__pfT, bpfv__CallFunc_GetSubstring_ReturnValue_4__pf, true);
			}
		case 65:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpv__PagexIterator__pfT, 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
			}
		case 66:
			{
				bpv__PagexIterator__pfT = b0l__Temp_int_Variable_1__pf;
			}
		case 67:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Length__pf, bpv__StartxIndex__pfT);
				bpv__StartxIndex__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 54;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MAT__pf))
	{
		bpv__MAT__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__Fade_in_Out_NewTrack_0_0C0423C249CB7FECA1352D919E3026BE__pf);
	}
	return; //KCST_EndOfThread
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ATriggerBox_MenuWorld_C__pf2552470103::StaticClass(), FName(TEXT("Details")), /*out*/ TArrayCaster<ATriggerBox_MenuWorld_C__pf2552470103*>(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf = Cast<ATriggerBox_MenuWorld_C__pf2552470103>(b0l__CallFunc_Array_Get_Item__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf))
	{
		b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf->SetActorHiddenInGame(true);
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf))
	{
		b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf->AActor::SetActorEnableCollision(false);
	}
	return; //KCST_EndOfThread
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; //KCST_EndOfThread
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__SpeechLoaderByDetailsPanel__pf()
{
	bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_0(34);
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_2(29);
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__FadexinxOut__UpdateFunc__pfTE()
{
	bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_1(68);
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__FadexinxOut__FinishedFunc__pfTE()
{
	bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_3(1);
}
void AMenuWorldLevelHolder_C__pf1711902218::bpf__PlayerCameraRotSave__pf()
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	TArray<AMotionControllerPawn_C__pf3611121690*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	UMenuGI_C__pf3730827578* bpfv__K2Node_DynamicCast_AsMenu_GI__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AMotionControllerPawn_C__pf3611121690* bpfv__CallFunc_Array_Get_Item__pf{};
	AMotionControllerPawn_C__pf3611121690* bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMotionControllerPawn_C__pf3611121690::StaticClass(), /*out*/ TArrayCaster<AMotionControllerPawn_C__pf3611121690*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf3611121690>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMenu_GI__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMenu_GI__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				if(::IsValid(bpfv__K2Node_DynamicCast_AsMenu_GI__pf))
				{
					bpfv__K2Node_DynamicCast_AsMenu_GI__pf->bpv__RotationxOffset__pfT = bpfv__CallFunc_BreakRotator_Yaw__pf;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AMenuWorldLevelHolder_C__pf1711902218::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FaderMaterial.FaderMaterial 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AMenuWorldLevelHolder_C__pf1711902218::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TestProject1.ReadWriter 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Stutter_Speak_Content/Audio_Files/Orignal_Audio/Mouse-Click-04-c-FesliyanStudios_com.Mouse-Click-04-c-FesliyanStudios_com 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/ArrowButton_Enabled.ArrowButton_Enabled 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Triangle.Triangle 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Custom_Floppy_Base.Custom_Floppy_Base 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
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
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
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
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.AudioMixerBlueprintLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio_2.Record_Mic_Audio_2 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.SynthComponent 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundSubmixBase 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Starter_Content/StarterContent/Audio/Fire_Sparks01.Fire_Sparks01 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio.Record_Mic_Audio 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioCapture.AudioCaptureComponent 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Engine/EngineSounds/Master.Master 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundWave 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Starter_Content/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/HandMesh.HandMesh 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/HandMesh1.HandMesh1 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Reset_Data_Base.Reset_Data_Base 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Bottom.Button_Bottom 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Floppy.Floppy 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Default_Floppy_Base.Default_Floppy_Base 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Silver.Floppy_Silver 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_White.Floppy_White 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Black.Floppy_Black 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_2.PickupSound_Cue_2 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_1.PickupSound_Cue_1 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TriggerBox 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/Geometry/Meshes/1M_Cube.1M_Cube 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Start.Button_Start 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Top.Button_Top 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Starter_Content/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Starter_Content/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuMusicOne_Cue.MenuMusicOne_Cue 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/TriggerBox_MenuWorld.TriggerBox_MenuWorld_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/MenuGI.MenuGI_C 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint.MusicManager_Blueprint_C 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/LeftButton.LeftButton_C 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/RightButton.RightButton_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AMenuWorldLevelHolder_C__pf1711902218
{
	FRegisterHelper__AMenuWorldLevelHolder_C__pf1711902218()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Managers/MenuWorldLevelHolder"), &AMenuWorldLevelHolder_C__pf1711902218::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMenuWorldLevelHolder_C__pf1711902218 Instance;
};
FRegisterHelper__AMenuWorldLevelHolder_C__pf1711902218 FRegisterHelper__AMenuWorldLevelHolder_C__pf1711902218::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
