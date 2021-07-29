#include "NativizedAssets.h"
#include "Projector_Blueprint__pf3730827578.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "BP_MotionController__pf3611121690.h"
#include "Floppy__pf3730827578.h"
#include "LeftButton__pf2198246146.h"
#include "RightButton__pf2198246146.h"
#include "MotionControllerPawn__pf3611121690.h"
#include "Floppy_Text__pf2075166221.h"
#include "ProjectorScreen_Blueprint__pf3730827578.h"
#include "BeginButton__pf2198246146.h"
#include "Runtime/Engine/Classes/Engine/SpotLight.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "ResetButton2_Button_Blueprint__pf3730827578.h"
#include "ResetButton2_Top_Blueprint__pf2552470103.h"
#include "Reset_Data_Base2_Blueprint__pf3730827578.h"
#include "Reset_Button_Display__pf4267528607.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Credits__pf4267528607.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AProjector_Blueprint_C__pf3730827578::AProjector_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("StaticMeshComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'StaticMeshComponent0' //
		auto& __Local__1 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__0), UStaticMeshComponent::__PPO__StaticMesh() )));
		__Local__1 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AProjector_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__0->OverrideMaterials = TArray<UMaterialInterface*> ();
		__Local__0->OverrideMaterials.Reserve(4);
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjector_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjector_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjector_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjector_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
		auto& __Local__2 = (*(AccessPrivateProperty<FVector >((__Local__0), USceneComponent::__PPO__RelativeScale3D() )));
		__Local__2 = FVector(0.135000, 0.200000, 0.175000);
		static TWeakFieldPtr<FProperty> __Local__4{};
		const FProperty* __Local__3 = __Local__4.Get();
		if (nullptr == __Local__3)
		{
			__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__3);
			__Local__4 = __Local__3;
		}
		(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__0), true, 0));
		// --- END default subobject 'StaticMeshComponent0' //
	}
	bpv__GrabBox__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("GrabBox"));
	bpv__GrabBox__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabBox__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__GrabBox__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__GrabBox__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__GrabBox__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(162.025696, 86.941376, 10.294264);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__GrabBox__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(0.826548, 0.859584, 0.061089);
	static TWeakFieldPtr<FProperty> __Local__8{};
	const FProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__GrabBox__pf), true, 0));
	bpv__FloppyMove_NewTrack_0_D91048D847E95A9C17D9CB8F0810431E__pf = 0.000000f;
	bpv__FloppyMove__Direction_D91048D847E95A9C17D9CB8F0810431E__pf = ETimelineDirection::Type::Forward;
	bpv__FloppyMove__pf = nullptr;
	bpv__CurrentxFloppy__pfT = nullptr;
	bpv__OtherxComp__pfT = nullptr;
	bpv__OtherxActor__pfT = nullptr;
	bpv__OverlappedxComponent__pfT = nullptr;
	bpv__NotxFirstxTime__pfTT = false;
	bpv__ChosenxFloppy__pfT = nullptr;
	bpv__Resetxafterxcredits__pfTT = false;
	bpv__Spotlight__pf = nullptr;
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMeshComponent*>((this), AStaticMeshActor::__PPO__StaticMeshComponent() )));
	__Local__9 = __Local__0;
	auto& __Local__10 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__10 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AProjector_Blueprint_C__pf3730827578::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__GrabBox__pf)
	{
		bpv__GrabBox__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AProjector_Blueprint_C__pf3730827578::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf3611121690::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AFloppy_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ALeftButton_C__pf2198246146::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARightButton_C__pf2198246146::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMotionControllerPawn_C__pf3611121690::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UFloppy_Text_C__pf2075166221::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABeginButton_C__pf2198246146::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AResetButton2_Button_Blueprint_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AResetButton2_Top_Blueprint_C__pf2552470103::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AReset_Data_Base2_Blueprint_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UReset_Button_Display_C__pf4267528607::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCredits_C__pf4267528607::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__11 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("FloppyMove_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__12);
	auto __Local__13 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__13);
	static TWeakFieldPtr<FProperty> __Local__15{};
	const FProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__11), false, 0));
	__Local__12->TimelineLength = 1.000000f;
	__Local__12->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__12->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__12->FloatTracks.GetData(), 1);
	auto& __Local__16 = __Local__12->FloatTracks[0];
	auto __Local__17 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__17);
	__Local__17->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__17->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__17->FloatCurve.Keys.GetData(), 2);
	auto& __Local__18 = __Local__17->FloatCurve.Keys[0];
	auto& __Local__19 = __Local__17->FloatCurve.Keys[1];
	__Local__19.Time = 1.000000f;
	__Local__19.Value = 1.000000f;
	__Local__16.CurveFloat = __Local__17;
	auto& __Local__20 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__20 = FName(TEXT("FloppyMove_NewTrack_0_D91048D847E95A9C17D9CB8F0810431E"));
	auto& __Local__21 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTTrackBase::__PPO__TrackName() )));
	__Local__21 = FName(TEXT("NewTrack_0"));
	__Local__12->TimelineGuid = FGuid(0xD91048D8, 0x47E95A9C, 0x17D9CB8F, 0x0810431E);
	auto& __Local__22 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__VariableName() )));
	__Local__22 = FName(TEXT("FloppyMove"));
	auto& __Local__23 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__23 = FName(TEXT("FloppyMove__Direction_D91048D847E95A9C17D9CB8F0810431E"));
	auto& __Local__24 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__24 = FName(TEXT("FloppyMove__UpdateFunc"));
	auto& __Local__25 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__25 = FName(TEXT("FloppyMove__FinishedFunc"));
	__Local__13->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__13->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__13->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__26 = __Local__13->ComponentDelegateBindings[0];
	__Local__26.ComponentPropertyName = FName(TEXT("GrabBox"));
	__Local__26.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__26.FunctionNameToBind = FName(TEXT("BndEvt__Projector_Blueprint_GrabBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AProjector_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_Projector_Blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_4__pf{};
	bool bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 63:
			{
				__CurrentState = 64;
				break;
			}
		case 64:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_1__pf))
				{
					FVector  __Local__27 = FVector(0.000000,0.000000,0.000000);
					FRotator  __Local__28 = FRotator(0.000000,0.000000,0.000000);
					bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1__pf = b0l__K2Node_DynamicCast_AsFloppy_1__pf->AActor::K2_SetActorLocationAndRotation(((::IsValid(b0l__K2Node_DynamicCast_AsFloppy_1__pf)) ? (b0l__K2Node_DynamicCast_AsFloppy_1__pf->bpv__SpawnxLocation__pfT) : (__Local__27)), ((::IsValid(b0l__K2Node_DynamicCast_AsFloppy_1__pf)) ? (b0l__K2Node_DynamicCast_AsFloppy_1__pf->bpv__SpawnxRotation__pfT) : (__Local__28)), false, /*out*/ b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1__pf, false);
				}
			}
		case 65:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_1__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_1__pf->bpv__Grabbable__pf = true;
				}
			}
		case 66:
			{
				__StateStack.Push(94);
			}
		case 67:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_16__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AReset_Data_Base2_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AReset_Data_Base2_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_16__pf).Get<AActor*>());
			}
		case 68:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_16__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_22__pf);
				b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf = Cast<AReset_Data_Base2_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_22__pf);
				b0l__K2Node_DynamicCast_bSuccess_22__pf = (b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_22__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf->bpv__Widget__pf))
				{
					bpfv__CallFunc_GetWidget_ReturnValue_4__pf = b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf->bpv__Widget__pf->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsReset_Button_Display__pf = Cast<UReset_Button_Display_C__pf4267528607>(bpfv__CallFunc_GetWidget_ReturnValue_4__pf);
				b0l__K2Node_DynamicCast_bSuccess_23__pf = (b0l__K2Node_DynamicCast_AsReset_Button_Display__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_23__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 70:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_Display__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_Display__pf->bpf__StopDisplayingByProjector__pf();
				}
			}
		case 71:
			{
				(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), FName(TEXT("Hologram")), /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_2__pf).Get<AActor*>());
			}
		case 72:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_21__pf);
				b0l__K2Node_DynamicCast_AsFloppy__pf = Cast<AFloppy_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_21__pf);
				b0l__K2Node_DynamicCast_bSuccess_21__pf = (b0l__K2Node_DynamicCast_AsFloppy__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_21__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 73:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = b0l__K2Node_DynamicCast_AsFloppy__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::SetHiddenInGame(true, false);
				}
			}
		case 74:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMotionControllerPawn_C__pf3611121690::StaticClass(), /*out*/ TArrayCaster<AMotionControllerPawn_C__pf3611121690*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Get<AActor*>());
			}
		case 75:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_7__pf);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf3611121690>(b0l__CallFunc_Array_Get_Item_7__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 76:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABP_MotionController_C__pf3611121690::StaticClass(), /*out*/ TArrayCaster<ABP_MotionController_C__pf3611121690*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 77:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf3611121690>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 78:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf = Cast<ABP_MotionController_C__pf3611121690>(b0l__CallFunc_Array_Get_Item_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 79:
			{
				AActor*  __Local__29 = ((AActor*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf)) ? (b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf->bpv__AttachedActor__pf) : (__Local__29)), bpv__OtherxActor__pfT);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 80:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpf__ReleaseByProjectorxRightx__pfLK();
				}
			}
		case 81:
			{
				TArray<FName>  __Local__30 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__OtherxActor__pfT)) ? (bpv__OtherxActor__pfT->Tags) : (__Local__30)), 1, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), b0l__CallFunc_Array_Get_Item_2__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
			}
		case 82:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				bpv__ChosenxFloppy__pfT = b0l__CallFunc_Array_Get_Item_4__pf;
			}
		case 83:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT))
				{
					bpv__ChosenxFloppy__pfT->bpv__Grabbable__pf = false;
				}
			}
		case 84:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf))
				{
					bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf->SetSimulatePhysics(false);
				}
			}
		case 85:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf))
				{
					bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 86:
			{
				if(::IsValid(bpv__OverlappedxComponent__pfT))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__OverlappedxComponent__pfT->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__OtherxActor__pfT))
				{
					bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue__pf = bpv__OtherxActor__pfT->AActor::K2_SetActorLocationAndRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(80.000000,180.000000,1.655000), false, /*out*/ b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf, false);
				}
			}
		case 87:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_9__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_9__pf).Get<AActor*>());
			}
		case 88:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_9__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_14__pf);
				b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_14__pf);
				b0l__K2Node_DynamicCast_bSuccess_13__pf = (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_13__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 89:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf))
				{
					b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf->bpf__ProjectorFadeIn__pf();
				}
			}
		case 90:
			{
				if(::IsValid(bpv__Spotlight__pf) && ::IsValid(bpv__Spotlight__pf->SpotLightComponent))
				{
					bpv__Spotlight__pf->SpotLightComponent->USceneComponent::SetVisibility(false, false);
				}
			}
		case 91:
			{
				if(::IsValid(bpv__FloppyMove__pf))
				{
					bpv__FloppyMove__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 92:
			{
				AActor*  __Local__31 = ((AActor*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__OtherxActor__pfT, ((::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf)) ? (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__AttachedActor__pf) : (__Local__31)));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 81;
					break;
				}
			}
		case 93:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpf__ReleaseByProjectorxLeftx__pfLK();
				}
				__CurrentState = 81;
				break;
			}
		case 94:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_1__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_1__pf->bpf__EnablePhysicsByProjector__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 95:
			{
				TArray<FName>  __Local__32 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__OtherxActor__pfT)) ? (bpv__OtherxActor__pfT->Tags) : (__Local__32)), 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(b0l__CallFunc_Array_Get_Item_3__pf, FName(TEXT("floppy")));
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 96:
			{
				if(::IsValid(bpv__OverlappedxComponent__pfT))
				{
					bpv__OverlappedxComponent__pfT->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 97:
			{
				if (!bpv__NotxFirstxTime__pfTT)
				{
					__CurrentState = 101;
					break;
				}
			}
		case 98:
			{
				TArray<FName>  __Local__33 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__CurrentxFloppy__pfT)) ? (bpv__CurrentxFloppy__pfT->Tags) : (__Local__33)), 1, /*out*/ b0l__CallFunc_Array_Get_Item_23__pf);
				(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), b0l__CallFunc_Array_Get_Item_23__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_3__pf).Get<AActor*>());
			}
		case 99:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_3__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_24__pf);
				b0l__K2Node_DynamicCast_AsFloppy_1__pf = Cast<AFloppy_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_24__pf);
				b0l__K2Node_DynamicCast_bSuccess_24__pf = (b0l__K2Node_DynamicCast_AsFloppy_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_24__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 100:
			{
				UKismetSystemLibrary::Delay(this, 0.010000, FLatentActionInfo(63, 1978258647, TEXT("ExecuteUbergraph_Projector_Blueprint_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 101:
			{
				bpv__NotxFirstxTime__pfTT = true;
				__CurrentState = 71;
				break;
			}
		case 112:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 113:
			{
				bpv__OverlappedxComponent__pfT = b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
			}
		case 114:
			{
				bpv__OtherxActor__pfT = b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
			}
		case 115:
			{
				bpv__OtherxComp__pfT = b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
				__CurrentState = 95;
				break;
			}
		case 116:
			{
				__CurrentState = 112;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AProjector_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_Projector_Blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 117);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf))
	{
		bpv__ChosenxFloppy__pfT->bpv__StaticMesh__pf->USceneComponent::K2_AddLocalOffset(FVector(0.000000,0.000000,0.290000), false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void AProjector_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_Projector_Blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpv__CurrentxFloppy__pfT = bpv__OtherxActor__pfT;
			}
		case 3:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT))
				{
					bpfv__CallFunc_GetWidget_ReturnValue_1__pf = bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsFloppy_Text_1__pf = Cast<UFloppy_Text_C__pf2075166221>(bpfv__CallFunc_GetWidget_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsFloppy_Text_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				FString  __Local__35 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text_1__pf)) ? (b0l__K2Node_DynamicCast_AsFloppy_Text_1__pf->bpv__OrignalxName__pfT) : (__Local__35)), FString(TEXT("Credits")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 5:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf).Get<AActor*>());
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_8__pf);
				b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_8__pf);
				b0l__K2Node_DynamicCast_bSuccess_7__pf = (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf))
				{
					UCredits_C__pf4267528607*  __Local__36 = ((UCredits_C__pf4267528607*)nullptr);
					b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf->SetWidget(((::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf)) ? (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Credits__pf) : (__Local__36)));
				}
			}
		case 8:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_13__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AResetButton2_Button_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AResetButton2_Button_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_13__pf).Get<AActor*>());
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_13__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_18__pf);
				b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf = Cast<AResetButton2_Button_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_18__pf);
				b0l__K2Node_DynamicCast_bSuccess_18__pf = (b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_18__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf->bpv__Credits__pf = true;
				}
			}
		case 11:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_15__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AResetButton2_Top_Blueprint_C__pf2552470103::StaticClass(), /*out*/ TArrayCaster<AResetButton2_Top_Blueprint_C__pf2552470103*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_15__pf).Get<AActor*>());
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_15__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_20__pf);
				b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1__pf = Cast<AResetButton2_Top_Blueprint_C__pf2552470103>(b0l__CallFunc_Array_Get_Item_20__pf);
				b0l__K2Node_DynamicCast_bSuccess_20__pf = (b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_20__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint_1__pf->bpf__ButtonPress__pf();
				}
			}
		case 14:
			{
				bpv__Resetxafterxcredits__pfTT = true;
			}
		case 15:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf))
				{
					b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_1__pf->bpf__ProjectorFadeOut__pf();
				}
			}
		case 16:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(23, -1481773482, TEXT("ExecuteUbergraph_Projector_Blueprint_2"), this));
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpf__Resetxpostxcredits__pfTT(bpv__Resetxafterxcredits__pfTT);
			}
		case 18:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_14__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AResetButton2_Button_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AResetButton2_Button_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_14__pf).Get<AActor*>());
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_14__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_19__pf);
				b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2__pf = Cast<AResetButton2_Button_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_19__pf);
				b0l__K2Node_DynamicCast_bSuccess_19__pf = (b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_19__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_2__pf->bpv__Credits__pf = false;
				}
			}
		case 21:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT))
				{
					bpfv__CallFunc_GetWidget_ReturnValue__pf = bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsFloppy_Text__pf = Cast<UFloppy_Text_C__pf2075166221>(bpfv__CallFunc_GetWidget_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsFloppy_Text__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 22:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_Text__pf->bpf__StoreSpeechNameByProjector__pf();
				}
				__CurrentState = 15;
				break;
			}
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__Spotlight__pf) && ::IsValid(bpv__Spotlight__pf->SpotLightComponent))
				{
					bpv__Spotlight__pf->SpotLightComponent->USceneComponent::SetVisibility(true, false);
				}
			}
		case 25:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(26, 1988157581, TEXT("ExecuteUbergraph_Projector_Blueprint_2"), this));
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				if(::IsValid(bpv__OverlappedxComponent__pfT))
				{
					bpv__OverlappedxComponent__pfT->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT))
				{
					bpfv__CallFunc_GetWidget_ReturnValue_2__pf = bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsFloppy_Text_2__pf = Cast<UFloppy_Text_C__pf2075166221>(bpfv__CallFunc_GetWidget_ReturnValue_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_8__pf = (b0l__K2Node_DynamicCast_AsFloppy_Text_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 29:
			{
				FString  __Local__39 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text_2__pf)) ? (b0l__K2Node_DynamicCast_AsFloppy_Text_2__pf->bpv__OrignalxName__pfT) : (__Local__39)), FString(TEXT("Credits")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 30:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_6__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALeftButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ALeftButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_6__pf).Get<AActor*>());
			}
		case 31:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_6__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_10__pf);
				b0l__K2Node_DynamicCast_AsLeft_Button_1__pf = Cast<ALeftButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_10__pf);
				b0l__K2Node_DynamicCast_bSuccess_10__pf = (b0l__K2Node_DynamicCast_AsLeft_Button_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 32:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Button_1__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Button_1__pf->bpv__ButtonOn__pf = false;
				}
			}
		case 33:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_7__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ARightButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ARightButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_7__pf).Get<AActor*>());
			}
		case 34:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_7__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_11__pf);
				b0l__K2Node_DynamicCast_AsRight_Button_1__pf = Cast<ARightButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_11__pf);
				b0l__K2Node_DynamicCast_bSuccess_11__pf = (b0l__K2Node_DynamicCast_AsRight_Button_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 35:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Button_1__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Button_1__pf->bpv__ButtonOn__pf = false;
				}
			}
		case 36:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_8__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABeginButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ABeginButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_8__pf).Get<AActor*>());
			}
		case 37:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_8__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_12__pf);
				b0l__K2Node_DynamicCast_AsBegin_Button_1__pf = Cast<ABeginButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_12__pf);
				b0l__K2Node_DynamicCast_bSuccess_12__pf = (b0l__K2Node_DynamicCast_AsBegin_Button_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_12__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 38:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBegin_Button_1__pf))
				{
					b0l__K2Node_DynamicCast_AsBegin_Button_1__pf->bpv__ButtonOn__pf = false;
				}
			}
		case 39:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_10__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AResetButton2_Button_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AResetButton2_Button_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_10__pf).Get<AActor*>());
			}
		case 40:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_10__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_15__pf);
				b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf = Cast<AResetButton2_Button_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_15__pf);
				b0l__K2Node_DynamicCast_bSuccess_14__pf = (b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_14__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 41:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf->bpv__ButtonxOn__pfT = false;
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ALeftButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ALeftButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 43:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				b0l__K2Node_DynamicCast_AsLeft_Button__pf = Cast<ALeftButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_5__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsLeft_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 44:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsLeft_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsLeft_Button__pf->bpv__ButtonOn__pf = true;
				}
			}
		case 45:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ARightButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ARightButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
			}
		case 46:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_6__pf);
				b0l__K2Node_DynamicCast_AsRight_Button__pf = Cast<ARightButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_6__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsRight_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 47:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Button__pf->bpv__ButtonOn__pf = true;
				}
			}
		case 48:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABeginButton_C__pf2198246146::StaticClass(), /*out*/ TArrayCaster<ABeginButton_C__pf2198246146*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf).Get<AActor*>());
			}
		case 49:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_9__pf);
				b0l__K2Node_DynamicCast_AsBegin_Button__pf = Cast<ABeginButton_C__pf2198246146>(b0l__CallFunc_Array_Get_Item_9__pf);
				b0l__K2Node_DynamicCast_bSuccess_9__pf = (b0l__K2Node_DynamicCast_AsBegin_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 50:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBegin_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsBegin_Button__pf->bpv__ButtonOn__pf = true;
				}
			}
		case 51:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_11__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AResetButton2_Top_Blueprint_C__pf2552470103::StaticClass(), /*out*/ TArrayCaster<AResetButton2_Top_Blueprint_C__pf2552470103*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_11__pf).Get<AActor*>());
			}
		case 52:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_11__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_16__pf);
				b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint__pf = Cast<AResetButton2_Top_Blueprint_C__pf2552470103>(b0l__CallFunc_Array_Get_Item_16__pf);
				b0l__K2Node_DynamicCast_bSuccess_15__pf = (b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_15__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 53:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsReset_Button_2_Top_Blueprint__pf->bpv__Grabbable__pf = true;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AProjector_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_Projector_Blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 54:
			{
				__CurrentState = 55;
				break;
			}
		case 55:
			{
				if(::IsValid(bpv__Spotlight__pf) && ::IsValid(bpv__Spotlight__pf->SpotLightComponent))
				{
					bpv__Spotlight__pf->SpotLightComponent->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				if(::IsValid(bpv__ChosenxFloppy__pfT) && ::IsValid(bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT))
				{
					bpfv__CallFunc_GetWidget_ReturnValue_3__pf = bpv__ChosenxFloppy__pfT->bpv__FloppyxName__pfT->GetWidget();
				}
				b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf = Cast<UFloppy_Text_C__pf2075166221>(bpfv__CallFunc_GetWidget_ReturnValue_3__pf);
				b0l__K2Node_DynamicCast_bSuccess_17__pf = (b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_17__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 58:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf->bpv__Reset__pf = true;
				}
			}
		case 59:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf->bpf__StoreSpeechNameByProjector__pf();
				}
			}
		case 60:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf))
				{
					b0l__K2Node_DynamicCast_AsFloppy_Text_3__pf->bpv__Reset__pf = false;
				}
			}
		case 61:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf))
				{
					b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf->bpf__ProjectorFadeOut__pf();
				}
			}
		case 62:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(54, -6464432, TEXT("ExecuteUbergraph_Projector_Blueprint_3"), this));
				__CurrentState = -1;
				break;
			}
		case 106:
			{
				if(::IsValid(bpv__Spotlight__pf) && ::IsValid(bpv__Spotlight__pf->SpotLightComponent))
				{
					bpv__Spotlight__pf->SpotLightComponent->USceneComponent::SetVisibility(false, false);
				}
			}
		case 107:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(56, -941528621, TEXT("ExecuteUbergraph_Projector_Blueprint_3"), this));
				__CurrentState = -1;
				break;
			}
		case 108:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_12__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_12__pf).Get<AActor*>());
			}
		case 109:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_12__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_17__pf);
				b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(b0l__CallFunc_Array_Get_Item_17__pf);
				b0l__K2Node_DynamicCast_bSuccess_16__pf = (b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_16__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 110:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf))
				{
					b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint_2__pf->bpf__ProjectorFadeIn__pf();
				}
				__CurrentState = 106;
				break;
			}
		case 111:
			{
				__CurrentState = 108;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AProjector_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_Projector_Blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 103);
	// optimized KCST_UnconditionalGoto
	(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_1__pf).Reset();
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ASpotLight::StaticClass(), FName(TEXT("Projector")), /*out*/ TArrayCaster<ASpotLight*>(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_1__pf).Get<AActor*>());
	FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_13__pf);
	bpv__Spotlight__pf = b0l__CallFunc_Array_Get_Item_13__pf;
	return; //KCST_EndOfThread
}
void AProjector_Blueprint_C__pf3730827578::bpf__BndEvt__Projector_Blueprint_GrabBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__42;
	T__Local__42& bpp__SweepResult__pf = *const_cast<T__Local__42 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Projector_Blueprint__pf_0(116);
}
void AProjector_Blueprint_C__pf3730827578::bpf__FadeInOnReset__pf()
{
	bpf__ExecuteUbergraph_Projector_Blueprint__pf_3(111);
}
void AProjector_Blueprint_C__pf3730827578::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Projector_Blueprint__pf_4(103);
}
void AProjector_Blueprint_C__pf3730827578::bpf__FloppyMove__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Projector_Blueprint__pf_1(117);
}
void AProjector_Blueprint_C__pf3730827578::bpf__FloppyMove__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Projector_Blueprint__pf_2(1);
}
void AProjector_Blueprint_C__pf3730827578::bpf__ResetxCurrentxFloppy__pfTT()
{
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	TArray<AFloppy_C__pf3730827578*> bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf{};
	AFloppy_C__pf3730827578* bpfv__CallFunc_Array_Get_Item_1__pf{};
	AFloppy_C__pf3730827578* bpfv__K2Node_DynamicCast_AsFloppy__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__NotxFirstxTime__pfTT)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				TArray<FName>  __Local__43 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__CurrentxFloppy__pfT)) ? (bpv__CurrentxFloppy__pfT->Tags) : (__Local__43)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), bpfv__CallFunc_Array_Get_Item__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsFloppy__pf = Cast<AFloppy_C__pf3730827578>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsFloppy__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpv__NotxFirstxTime__pfTT = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AProjector_Blueprint_C__pf3730827578::bpf__Resetxpostxcredits__pfTT(bool bpp__NeedsxReset__pfT)
{
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	AProjectorScreen_Blueprint_C__pf3730827578* bpfv__CallFunc_Array_Get_Item__pf{};
	AProjectorScreen_Blueprint_C__pf3730827578* bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__NeedsxReset__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AProjectorScreen_Blueprint_C__pf3730827578::StaticClass(), /*out*/ TArrayCaster<AProjectorScreen_Blueprint_C__pf3730827578*>(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = Cast<AProjectorScreen_Blueprint_C__pf3730827578>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf))
				{
					UUserWidget*  __Local__44 = ((UUserWidget*)nullptr);
					bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Display__pf->SetWidget(((::IsValid(bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf)) ? (bpfv__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf->bpv__Details__pf) : (__Local__44)));
				}
			}
		case 5:
			{
				bpv__Resetxafterxcredits__pfTT = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AProjector_Blueprint_C__pf3730827578::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Projector.Projector 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Projector/Projector_Body.Projector_Body 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Projector/Projector_Ring.Projector_Ring 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Projector/Projector_Glass_Lens.Projector_Glass_Lens 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AProjector_Blueprint_C__pf3730827578::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{185, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLight 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Bottom.Button_Bottom 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Reset_Data_Base.Reset_Data_Base 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Stutter_Speak_Content/Audio_Files/Orignal_Audio/Mouse-Click-04-c-FesliyanStudios_com.Mouse-Click-04-c-FesliyanStudios_com 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Top.Button_Top 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Starter_Content/StarterContent/Audio/Fire_Sparks01.Fire_Sparks01 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Custom_Floppy_Base.Custom_Floppy_Base 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Mic_Ring.Mic_Ring 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/Geometry/Meshes/1M_Cube.1M_Cube 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Stutter_Speak_Content/Audio_Files/Orignal_Audio/Running_Motor.Running_Motor 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/ArrowButton_Enabled.ArrowButton_Enabled 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Triangle.Triangle 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundSubmixBase 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio.Record_Mic_Audio 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.AudioMixerBlueprintLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio_2.Record_Mic_Audio_2 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.SynthComponent 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MicOn.MicOn 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_Cylinder.Microphone_Cylinder 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Stage_Wood.Stage_Wood 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_MainMic.Microphone_MainMic 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Microphone.Microphone 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Engine/EngineSounds/Master.Master 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioCapture.AudioCaptureComponent 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FaderMaterial.FaderMaterial 
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
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Starter_Content/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Floppy.Floppy 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Default_Floppy_Base.Default_Floppy_Base 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Silver.Floppy_Silver 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_White.Floppy_White 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Black.Floppy_Black 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_2.PickupSound_Cue_2 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_1.PickupSound_Cue_1 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TriggerBox 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Start.Button_Start 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Starter_Content/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TestProject1.ReadWriter 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuMusicOne_Cue.MenuMusicOne_Cue 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/Floppy.Floppy_C 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/LeftButton.LeftButton_C 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/RightButton.RightButton_C 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Floppy_Text.Floppy_Text_C 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/ProjectorScreen_Blueprint.ProjectorScreen_Blueprint_C 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginButton.BeginButton_C 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/ResetButton2_Button_Blueprint.ResetButton2_Button_Blueprint_C 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/ResetButton2_Top_Blueprint.ResetButton2_Top_Blueprint_C 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/Reset_Data_Base2_Blueprint.Reset_Data_Base2_Blueprint_C 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Reset_Button_Display.Reset_Button_Display_C 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Credits.Credits_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AProjector_Blueprint_C__pf3730827578
{
	FRegisterHelper__AProjector_Blueprint_C__pf3730827578()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Blueprints/Projector_Blueprint"), &AProjector_Blueprint_C__pf3730827578::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AProjector_Blueprint_C__pf3730827578 Instance;
};
FRegisterHelper__AProjector_Blueprint_C__pf3730827578 FRegisterHelper__AProjector_Blueprint_C__pf3730827578::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
