#include "NativizedAssets.h"
#include "ProjectorScreen_Blueprint__pf3730827578.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
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
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Speech_Details_Pannel__pf4267528607.h"
#include "Confirm_Begin_Speech__pf4267528607.h"
#include "Credits__pf4267528607.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AProjectorScreen_Blueprint_C__pf3730827578::AProjectorScreen_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("StaticMeshComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'StaticMeshComponent0' //
		auto& __Local__1 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__0), UStaticMeshComponent::__PPO__StaticMesh() )));
		__Local__1 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__0->OverrideMaterials = TArray<UMaterialInterface*> ();
		__Local__0->OverrideMaterials.Reserve(4);
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		__Local__0->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
		auto& __Local__2 = (*(AccessPrivateProperty<FVector >((__Local__0), USceneComponent::__PPO__RelativeScale3D() )));
		__Local__2 = FVector(0.500000, 0.500000, 0.500144);
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
	bpv__Display__pf = CreateDefaultSubobject<UWidgetComponent>(TEXT("Display"));
	bpv__ProjectorFader__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectorFader"));
	bpv__ConfirmationxText__pfT = CreateDefaultSubobject<UWidgetComponent>(TEXT("Confirmation Text"));
	bpv__Display__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Display__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<TSubclassOf<UUserWidget>  >((bpv__Display__pf), UWidgetComponent::__PPO__WidgetClass() )));
	__Local__5 = USpeech_Details_Pannel_C__pf4267528607::StaticClass();
	auto& __Local__6 = (*(AccessPrivateProperty<FIntPoint >((bpv__Display__pf), UWidgetComponent::__PPO__DrawSize() )));
	__Local__6.X = 2000;
	__Local__6.Y = 1200;
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Display__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(-1.466642, -0.000000, -23.552086);
	auto& __Local__8 = (*(AccessPrivateProperty<FRotator >((bpv__Display__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__8 = FRotator(0.000000, 180.000000, 0.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__Display__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__9 = FVector(1.000000, 0.300000, 0.250000);
	static TWeakFieldPtr<FProperty> __Local__11{};
	const FProperty* __Local__10 = __Local__11.Get();
	if (nullptr == __Local__10)
	{
		__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__10);
		__Local__11 = __Local__10;
	}
	(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((bpv__Display__pf), true, 0));
	bpv__ProjectorFader__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProjectorFader__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__ProjectorFader__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__ProjectorFader__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__ProjectorFader__pf->OverrideMaterials.Reserve(1);
	bpv__ProjectorFader__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__ProjectorFader__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(-1.500000, -0.000275, 0.000000);
	(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((bpv__ProjectorFader__pf), true, 0));
	bpv__ConfirmationxText__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__ConfirmationxText__pfT->AttachToComponent(bpv__ProjectorFader__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<UUserWidget>  >((bpv__ConfirmationxText__pfT), UWidgetComponent::__PPO__WidgetClass() )));
	__Local__14 = UConfirm_Begin_Speech_C__pf4267528607::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<FIntPoint >((bpv__ConfirmationxText__pfT), UWidgetComponent::__PPO__DrawSize() )));
	__Local__15.X = 1920;
	__Local__15.Y = 1080;
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__ConfirmationxText__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(-1.383721, 0.000103, -15.459614);
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__ConfirmationxText__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(0.000000, -179.999969, 0.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__ConfirmationxText__pfT), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__18 = FVector(1.000000, 0.250000, 0.250000);
	(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((bpv__ConfirmationxText__pfT), true, 0));
	bpv__Timeline_1_NewTrack_0_94B1DB104C059A38E3F2F79CBCEA26CD__pf = 0.000000f;
	bpv__Timeline_1__Direction_94B1DB104C059A38E3F2F79CBCEA26CD__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF__pf = 0.000000f;
	bpv__Timeline_3__Direction_5BED847147E109FD2DA806BFA760A1EF__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_3__pf = nullptr;
	bpv__Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03__pf = 0.000000f;
	bpv__Timeline_2__Direction_5D7A4EDF40C40A37453A03BED529CE03__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_2__pf = nullptr;
	bpv__Timeline_0_NewTrack_0_D1E66E324B5A7958FE66C8AF64A42750__pf = 0.000000f;
	bpv__Timeline_0__Direction_D1E66E324B5A7958FE66C8AF64A42750__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__Credits__pf = nullptr;
	bpv__Details__pf = nullptr;
	bpv__MAT__pf = nullptr;
	bpv__Condition__pf = false;
	bpv__AsxConfirmxBeginxSpeech__pfTTT = nullptr;
	auto& __Local__19 = (*(AccessPrivateProperty<UStaticMeshComponent*>((this), AStaticMeshActor::__PPO__StaticMeshComponent() )));
	__Local__19 = __Local__0;
	auto& __Local__20 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__20 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AProjectorScreen_Blueprint_C__pf3730827578::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Display__pf)
	{
		bpv__Display__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ProjectorFader__pf)
	{
		bpv__ProjectorFader__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ConfirmationxText__pfT)
	{
		bpv__ConfirmationxText__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AProjectorScreen_Blueprint_C__pf3730827578::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(USpeech_Details_Pannel_C__pf4267528607::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UConfirm_Begin_Speech_C__pf4267528607::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCredits_C__pf4267528607::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto __Local__22 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__22);
	auto __Local__23 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_2_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__23);
	auto __Local__24 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_3_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__24);
	auto __Local__25 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__25);
	static TWeakFieldPtr<FProperty> __Local__27{};
	const FProperty* __Local__26 = __Local__27.Get();
	if (nullptr == __Local__26)
	{
		__Local__26 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__26);
		__Local__27 = __Local__26;
	}
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__21), false, 0));
	__Local__22->TimelineLength = 1.500000f;
	__Local__22->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__22->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__22->FloatTracks.GetData(), 1);
	auto& __Local__28 = __Local__22->FloatTracks[0];
	auto __Local__29 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__29);
	__Local__29->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__29->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__29->FloatCurve.Keys.GetData(), 2);
	auto& __Local__30 = __Local__29->FloatCurve.Keys[0];
	__Local__30.Time = 0.500000f;
	__Local__30.Value = 1.000000f;
	auto& __Local__31 = __Local__29->FloatCurve.Keys[1];
	__Local__31.Time = 1.500000f;
	__Local__28.CurveFloat = __Local__29;
	auto& __Local__32 = (*(AccessPrivateProperty<FName >(&(__Local__28), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__32 = FName(TEXT("Timeline_0_NewTrack_0_D1E66E324B5A7958FE66C8AF64A42750"));
	auto& __Local__33 = (*(AccessPrivateProperty<FName >(&(__Local__28), FTTTrackBase::__PPO__TrackName() )));
	__Local__33 = FName(TEXT("NewTrack_0"));
	__Local__22->TimelineGuid = FGuid(0xD1E66E32, 0x4B5A7958, 0xFE66C8AF, 0x64A42750);
	auto& __Local__34 = (*(AccessPrivateProperty<FName >((__Local__22), UTimelineTemplate::__PPO__VariableName() )));
	__Local__34 = FName(TEXT("Timeline_0"));
	auto& __Local__35 = (*(AccessPrivateProperty<FName >((__Local__22), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__35 = FName(TEXT("Timeline_0__Direction_D1E66E324B5A7958FE66C8AF64A42750"));
	auto& __Local__36 = (*(AccessPrivateProperty<FName >((__Local__22), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__36 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__37 = (*(AccessPrivateProperty<FName >((__Local__22), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__37 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__23->TimelineLength = 0.750000f;
	__Local__23->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__23->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__23->FloatTracks.GetData(), 1);
	auto& __Local__38 = __Local__23->FloatTracks[0];
	auto __Local__39 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1_3"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__39);
	__Local__39->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__39->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__39->FloatCurve.Keys.GetData(), 2);
	auto& __Local__40 = __Local__39->FloatCurve.Keys[0];
	__Local__40.Time = 0.500000f;
	__Local__40.Value = 1.000000f;
	auto& __Local__41 = __Local__39->FloatCurve.Keys[1];
	__Local__41.Time = 0.750000f;
	__Local__38.CurveFloat = __Local__39;
	auto& __Local__42 = (*(AccessPrivateProperty<FName >(&(__Local__38), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__42 = FName(TEXT("Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03"));
	auto& __Local__43 = (*(AccessPrivateProperty<FName >(&(__Local__38), FTTTrackBase::__PPO__TrackName() )));
	__Local__43 = FName(TEXT("NewTrack_0"));
	__Local__23->TimelineGuid = FGuid(0x5D7A4EDF, 0x40C40A37, 0x453A03BE, 0xD529CE03);
	auto& __Local__44 = (*(AccessPrivateProperty<FName >((__Local__23), UTimelineTemplate::__PPO__VariableName() )));
	__Local__44 = FName(TEXT("Timeline_2"));
	auto& __Local__45 = (*(AccessPrivateProperty<FName >((__Local__23), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__45 = FName(TEXT("Timeline_2__Direction_5D7A4EDF40C40A37453A03BED529CE03"));
	auto& __Local__46 = (*(AccessPrivateProperty<FName >((__Local__23), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__46 = FName(TEXT("Timeline_2__UpdateFunc"));
	auto& __Local__47 = (*(AccessPrivateProperty<FName >((__Local__23), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__47 = FName(TEXT("Timeline_2__FinishedFunc"));
	__Local__24->TimelineLength = 1.000000f;
	__Local__24->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__24->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__24->FloatTracks.GetData(), 1);
	auto& __Local__48 = __Local__24->FloatTracks[0];
	auto __Local__49 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1_2_3"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__49);
	__Local__49->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__49->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__49->FloatCurve.Keys.GetData(), 2);
	auto& __Local__50 = __Local__49->FloatCurve.Keys[0];
	__Local__50.Value = 1.000000f;
	auto& __Local__51 = __Local__49->FloatCurve.Keys[1];
	__Local__51.Time = 1.000000f;
	__Local__48.CurveFloat = __Local__49;
	auto& __Local__52 = (*(AccessPrivateProperty<FName >(&(__Local__48), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__52 = FName(TEXT("Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF"));
	auto& __Local__53 = (*(AccessPrivateProperty<FName >(&(__Local__48), FTTTrackBase::__PPO__TrackName() )));
	__Local__53 = FName(TEXT("NewTrack_0"));
	__Local__24->TimelineGuid = FGuid(0x5BED8471, 0x47E109FD, 0x2DA806BF, 0xA760A1EF);
	auto& __Local__54 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__VariableName() )));
	__Local__54 = FName(TEXT("Timeline_3"));
	auto& __Local__55 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__55 = FName(TEXT("Timeline_3__Direction_5BED847147E109FD2DA806BFA760A1EF"));
	auto& __Local__56 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__56 = FName(TEXT("Timeline_3__UpdateFunc"));
	auto& __Local__57 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__57 = FName(TEXT("Timeline_3__FinishedFunc"));
	__Local__25->TimelineLength = 1.000000f;
	__Local__25->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__25->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__25->FloatTracks.GetData(), 1);
	auto& __Local__58 = __Local__25->FloatTracks[0];
	auto __Local__59 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1_2"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__59);
	__Local__59->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__59->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__59->FloatCurve.Keys.GetData(), 2);
	auto& __Local__60 = __Local__59->FloatCurve.Keys[0];
	__Local__60.Value = 1.000000f;
	auto& __Local__61 = __Local__59->FloatCurve.Keys[1];
	__Local__61.Time = 1.000000f;
	__Local__58.CurveFloat = __Local__59;
	auto& __Local__62 = (*(AccessPrivateProperty<FName >(&(__Local__58), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__62 = FName(TEXT("Timeline_1_NewTrack_0_94B1DB104C059A38E3F2F79CBCEA26CD"));
	auto& __Local__63 = (*(AccessPrivateProperty<FName >(&(__Local__58), FTTTrackBase::__PPO__TrackName() )));
	__Local__63 = FName(TEXT("NewTrack_0"));
	__Local__25->TimelineGuid = FGuid(0x94B1DB10, 0x4C059A38, 0xE3F2F79C, 0xBCEA26CD);
	auto& __Local__64 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__VariableName() )));
	__Local__64 = FName(TEXT("Timeline_1"));
	auto& __Local__65 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__65 = FName(TEXT("Timeline_1__Direction_94B1DB104C059A38E3F2F79CBCEA26CD"));
	auto& __Local__66 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__66 = FName(TEXT("Timeline_1__UpdateFunc"));
	auto& __Local__67 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__67 = FName(TEXT("Timeline_1__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MAT__pf))
	{
		bpv__MAT__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03__pf);
	}
	if(::IsValid(bpv__AsxConfirmxBeginxSpeech__pfTTT))
	{
		bpv__AsxConfirmxBeginxSpeech__pfTTT->bpf__HideByProjectorScreen__pf(bpv__Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03__pf, false);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	UCredits_C__pf4267528607* bpfv__CallFunc_Create_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__ConfirmationxText__pfT))
	{
		bpfv__CallFunc_GetWidget_ReturnValue_2__pf = bpv__ConfirmationxText__pfT->GetWidget();
	}
	b0l__K2Node_DynamicCast_AsConfirm_Begin_Speech__pf = Cast<UConfirm_Begin_Speech_C__pf4267528607>(bpfv__CallFunc_GetWidget_ReturnValue_2__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsConfirm_Begin_Speech__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__AsxConfirmxBeginxSpeech__pfTTT = b0l__K2Node_DynamicCast_AsConfirm_Begin_Speech__pf;
	if(::IsValid(bpv__Display__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue__pf = bpv__Display__pf->GetWidget();
	}
	if(::IsValid(bpfv__CallFunc_GetWidget_ReturnValue__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Display__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue_1__pf = bpv__Display__pf->GetWidget();
	}
	bpv__Details__pf = bpfv__CallFunc_GetWidget_ReturnValue_1__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UCredits_C__pf4267528607>(UWidgetBlueprintLibrary::Create(this, UCredits_C__pf4267528607::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpv__Credits__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AProjectorScreen_Blueprint_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
	bpv__MAT__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(::IsValid(bpv__ProjectorFader__pf))
	{
		bpv__ProjectorFader__pf->SetMaterial(0, bpv__MAT__pf);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MAT__pf))
	{
		bpv__MAT__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF__pf);
	}
	if(::IsValid(bpv__AsxConfirmxBeginxSpeech__pfTTT))
	{
		bpv__AsxConfirmxBeginxSpeech__pfTTT->bpf__ShowByProjectorScreen__pf(bpv__Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF__pf);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_2__pf))
	{
		bpv__Timeline_2__pf->UTimelineComponent::PlayFromStart();
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_3__pf))
	{
		bpv__Timeline_3__pf->UTimelineComponent::ReverseFromEnd();
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				if(::IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::ReverseFromEnd();
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
				if (!bpv__Condition__pf)
				{
					__CurrentState = 34;
					break;
				}
				__CurrentState = 9;
				break;
			}
		case 34:
			{
				bpv__Condition__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MAT__pf))
	{
		bpv__MAT__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__Timeline_1_NewTrack_0_94B1DB104C059A38E3F2F79CBCEA26CD__pf);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MAT__pf))
	{
		bpv__MAT__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Opacity")), bpv__Timeline_0_NewTrack_0_D1E66E324B5A7958FE66C8AF64A42750__pf);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_10(int32 bpp__EntryPoint__pf)
{
	UUserWidget* bpfv__CallFunc_GetWidget_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Display__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue__pf = bpv__Display__pf->GetWidget();
	}
	if(::IsValid(bpfv__CallFunc_GetWidget_ReturnValue__pf))
	{
		bpfv__CallFunc_GetWidget_ReturnValue__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__AsxConfirmxBeginxSpeech__pfTTT))
	{
		bpv__AsxConfirmxBeginxSpeech__pfTTT->bpf__HideByProjectorScreen__pf(0.000000, true);
	}
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	return; // KCST_GotoReturn
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__RevertByCancel__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_3(37);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ConfirmxByBeginSpeech__pfzy()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_4(36);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ProjectorFadeOut__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_8(35);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ProjectorFadeIn__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_5(32);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ShowDetailsByDetailsPanel__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_10(29);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_1(24);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_3__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_2(15);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_3__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_11(13);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_2__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_0(10);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_2__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_12(8);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_6(6);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_13(4);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_7(1);
}
void AProjectorScreen_Blueprint_C__pf3730827578::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_9(31);
}
PRAGMA_DISABLE_OPTIMIZATION
void AProjectorScreen_Blueprint_C__pf3730827578::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AProjectorScreen_Blueprint_C__pf3730827578::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
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
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech.Confirm_Begin_Speech_C 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Credits.Credits_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AProjectorScreen_Blueprint_C__pf3730827578
{
	FRegisterHelper__AProjectorScreen_Blueprint_C__pf3730827578()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Blueprints/ProjectorScreen_Blueprint"), &AProjectorScreen_Blueprint_C__pf3730827578::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AProjectorScreen_Blueprint_C__pf3730827578 Instance;
};
FRegisterHelper__AProjectorScreen_Blueprint_C__pf3730827578 FRegisterHelper__AProjectorScreen_Blueprint_C__pf3730827578::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
