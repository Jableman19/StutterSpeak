#include "NativizedAssets.h"
#include "Text_Size_Slider__pf3730827578.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
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
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
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
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "MenuGI__pf3730827578.h"
#include "SettingsBox__pf3730827578.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AText_Size_Slider_C__pf3730827578::AText_Size_Slider_C__pf3730827578(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Rail__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rail"));
	bpv__Slider__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Slider"));
	bpv__LEDxxSmallx__pfTLK = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LED (Small)"));
	bpv__LEDxxMeduimx__pfTLK = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LED (Meduim)"));
	bpv__LEDxxLargex__pfTLK = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LED (Large)"));
	bpv__Medium__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Medium"));
	bpv__Small__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Small"));
	bpv__Large__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Large"));
	bpv__Audio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
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
	bpv__Rail__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Rail__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Rail__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__Rail__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__3 = FVector(0.005000, 0.255000, 0.005000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Rail__pf), true, 0));
	bpv__Slider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Slider__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Slider__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Slider__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Slider__pf->OverrideMaterials.Reserve(1);
	bpv__Slider__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Slider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.000000, 10.000000, 0.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FRotator >((bpv__Slider__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__6 = FRotator(90.000000, 153.434967, 63.434479);
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Slider__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__7 = FVector(0.861372, 0.861372, 0.861372);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Slider__pf), true, 0));
	bpv__LEDxxSmallx__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	bpv__LEDxxSmallx__pfTLK->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__LEDxxSmallx__pfTLK), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__LEDxxSmallx__pfTLK->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__LEDxxSmallx__pfTLK->OverrideMaterials.Reserve(1);
	bpv__LEDxxSmallx__pfTLK->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxSmallx__pfTLK), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(-5.195408, 9.838251, -0.957227);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxSmallx__pfTLK), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(0.037891, 0.037891, 0.037891);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__LEDxxSmallx__pfTLK), true, 0));
	bpv__LEDxxMeduimx__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	bpv__LEDxxMeduimx__pfTLK->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__LEDxxMeduimx__pfTLK), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__LEDxxMeduimx__pfTLK->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__LEDxxMeduimx__pfTLK->OverrideMaterials.Reserve(1);
	bpv__LEDxxMeduimx__pfTLK->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxMeduimx__pfTLK), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(-5.195408, -0.349680, -0.957222);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxMeduimx__pfTLK), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__13 = FVector(0.037891, 0.037891, 0.037891);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__LEDxxMeduimx__pfTLK), true, 0));
	bpv__LEDxxLargex__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	bpv__LEDxxLargex__pfTLK->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__LEDxxLargex__pfTLK), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__14 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__LEDxxLargex__pfTLK->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__LEDxxLargex__pfTLK->OverrideMaterials.Reserve(1);
	bpv__LEDxxLargex__pfTLK->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxLargex__pfTLK), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(-5.195408, -10.042338, -0.957224);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__LEDxxLargex__pfTLK), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__16 = FVector(0.037891, 0.037891, 0.037891);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__LEDxxLargex__pfTLK), true, 0));
	bpv__Medium__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Medium__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Medium__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F62467394A09A6935B6E83AEC37CE80B]\", \"7463B41C430DA1B337C04F9771733A13\", \"Medium\")")	);
	bpv__Medium__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__Medium__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextCenter;
	bpv__Medium__pf->WorldSize = 3.500000f;
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__Medium__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(9.583569, -0.100000, 0.097777);
	auto& __Local__18 = (*(AccessPrivateProperty<FRotator >((bpv__Medium__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__18 = FRotator(90.000000, 90.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Medium__pf), false, 0));
	bpv__Small__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Small__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Small__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F62467394A09A6935B6E83AEC37CE80B]\", \"02EFC8C646A26851DDB5B4BED701ADFC\", \"Small\")")	);
	bpv__Small__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__Small__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextCenter;
	bpv__Small__pf->WorldSize = 3.500000f;
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__Small__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(8.044628, 9.900000, 0.097783);
	auto& __Local__20 = (*(AccessPrivateProperty<FRotator >((bpv__Small__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__20 = FRotator(90.000000, 90.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Small__pf), false, 0));
	bpv__Large__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Large__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Large__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F62467394A09A6935B6E83AEC37CE80B]\", \"EF34A6DF4FEC613E596B79880CE0F7E7\", \"Large\")")	);
	bpv__Large__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__Large__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextCenter;
	bpv__Large__pf->WorldSize = 3.500000f;
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__Large__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(8.044628, -10.100000, 0.097960);
	auto& __Local__22 = (*(AccessPrivateProperty<FRotator >((bpv__Large__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__22 = FRotator(90.000000, 90.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Large__pf), false, 0));
	bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Audio__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Audio__pf->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Audio__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Audio__pf), false, 0));
	bpv__CurrentxIndex__pfT = 0;
	bpv__NextxIndex__pfT = 0;
	bpv__Newxlocation__pfT = FVector(0.000000, 10.000000, 0.000000);
	bpv__AsxSettingsxBox__pfTT = nullptr;
	bpv__Sound__pf = nullptr;
	auto& __Local__23 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__23 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AText_Size_Slider_C__pf3730827578::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Rail__pf)
	{
		bpv__Rail__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Slider__pf)
	{
		bpv__Slider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LEDxxSmallx__pfTLK)
	{
		bpv__LEDxxSmallx__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LEDxxMeduimx__pfTLK)
	{
		bpv__LEDxxMeduimx__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__LEDxxLargex__pfTLK)
	{
		bpv__LEDxxLargex__pfTLK->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Medium__pf)
	{
		bpv__Medium__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Small__pf)
	{
		bpv__Small__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Large__pf)
	{
		bpv__Large__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Audio__pf)
	{
		bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AText_Size_Slider_C__pf3730827578::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UMenuGI_C__pf3730827578::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ASettingsBox_C__pf3730827578::StaticClass());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void AText_Size_Slider_C__pf3730827578::bpf__ExecuteUbergraph_Text_Size_Slider__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxIndex__pfT, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxIndex__pfT, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxIndex__pfT, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__CurrentxIndex__pfT, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				bpv__NextxIndex__pfT = 1;
			}
		case 21:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__NextxIndex__pfT, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 22;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__NextxIndex__pfT, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 31;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__NextxIndex__pfT, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 35;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__NextxIndex__pfT, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 39;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpf__ChangexLEDS__pfT(bpv__LEDxxSmallx__pfTLK, bpv__LEDxxMeduimx__pfTLK);
			}
		case 23:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,10.000000,0.000000);
			}
		case 24:
			{
				bpv__CurrentxIndex__pfT = 0;
			}
		case 25:
			{
				if(::IsValid(bpv__AsxSettingsxBox__pfTT))
				{
					bpv__AsxSettingsxBox__pfTT->bpf__SmallBySmallSwitch__pf();
				}
			}
		case 26:
			{
				if(::IsValid(bpv__Audio__pf))
				{
					bpv__Audio__pf->Play(0.000000);
				}
			}
		case 27:
			{
				if(::IsValid(bpv__Slider__pf))
				{
					bpv__Slider__pf->USceneComponent::K2_SetRelativeLocation(bpv__Newxlocation__pfT, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				bpv__NextxIndex__pfT = 2;
				__CurrentState = 21;
				break;
			}
		case 29:
			{
				bpv__NextxIndex__pfT = 3;
				__CurrentState = 21;
				break;
			}
		case 30:
			{
				bpv__NextxIndex__pfT = 0;
				__CurrentState = 21;
				break;
			}
		case 31:
			{
				bpf__ChangexLEDS__pfT(bpv__LEDxxMeduimx__pfTLK, bpv__LEDxxSmallx__pfTLK);
			}
		case 32:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,0.000000,0.000000);
			}
		case 33:
			{
				bpv__CurrentxIndex__pfT = 1;
			}
		case 34:
			{
				if(::IsValid(bpv__AsxSettingsxBox__pfTT))
				{
					bpv__AsxSettingsxBox__pfTT->bpf__MediumByMediumSwitch__pf();
				}
				__CurrentState = 26;
				break;
			}
		case 35:
			{
				bpf__ChangexLEDS__pfT(bpv__LEDxxLargex__pfTLK, bpv__LEDxxMeduimx__pfTLK);
			}
		case 36:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,-10.000000,0.000000);
			}
		case 37:
			{
				bpv__CurrentxIndex__pfT = 2;
			}
		case 38:
			{
				if(::IsValid(bpv__AsxSettingsxBox__pfTT))
				{
					bpv__AsxSettingsxBox__pfTT->bpf__LargeByLargeSwitch__pf();
				}
				__CurrentState = 26;
				break;
			}
		case 39:
			{
				bpf__ChangexLEDS__pfT(bpv__LEDxxMeduimx__pfTLK, bpv__LEDxxLargex__pfTLK);
			}
		case 40:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,0.000000,0.000000);
			}
		case 41:
			{
				bpv__CurrentxIndex__pfT = 3;
			}
		case 42:
			{
				if(::IsValid(bpv__AsxSettingsxBox__pfTT))
				{
					bpv__AsxSettingsxBox__pfTT->bpf__MediumByMediumSwitch__pf();
				}
				__CurrentState = 26;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AText_Size_Slider_C__pf3730827578::bpf__ExecuteUbergraph_Text_Size_Slider__pf_1(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	ASettingsBox_C__pf3730827578* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
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
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMenu_GI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				FString  __Local__24 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__TextSize__pf) : (__Local__24)), FString(TEXT("Small")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 4:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,10.000000,0.000000);
			}
		case 5:
			{
				bpf__ResetxLEDS__pfT(bpv__LEDxxSmallx__pfTLK, bpv__LEDxxMeduimx__pfTLK, bpv__LEDxxLargex__pfTLK);
			}
		case 6:
			{
				bpv__CurrentxIndex__pfT = 0;
			}
		case 7:
			{
				if(::IsValid(bpv__Slider__pf))
				{
					bpv__Slider__pf->USceneComponent::K2_SetRelativeLocation(bpv__Newxlocation__pfT, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, false);
				}
			}
		case 8:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<ASettingsBox_C__pf3730827578>(UGameplayStatics::GetActorOfClass(this, ASettingsBox_C__pf3730827578::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				b0l__K2Node_DynamicCast_AsSettings_Box__pf = Cast<ASettingsBox_C__pf3730827578>(bpfv__CallFunc_GetActorOfClass_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsSettings_Box__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				bpv__AsxSettingsxBox__pfTT = b0l__K2Node_DynamicCast_AsSettings_Box__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				FString  __Local__25 = FString(TEXT(""));
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__TextSize__pf) : (__Local__25)), FString(TEXT("Medium")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 12:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,0.000000,0.000000);
			}
		case 13:
			{
				bpf__ResetxLEDS__pfT(bpv__LEDxxMeduimx__pfTLK, bpv__LEDxxLargex__pfTLK, bpv__LEDxxSmallx__pfTLK);
			}
		case 14:
			{
				bpv__CurrentxIndex__pfT = 1;
				__CurrentState = 7;
				break;
			}
		case 15:
			{
				bpv__Newxlocation__pfT = FVector(0.000000,-10.000000,0.000000);
			}
		case 16:
			{
				bpf__ResetxLEDS__pfT(bpv__LEDxxLargex__pfTLK, bpv__LEDxxSmallx__pfTLK, bpv__LEDxxMeduimx__pfTLK);
			}
		case 17:
			{
				bpv__CurrentxIndex__pfT = 2;
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AText_Size_Slider_C__pf3730827578::bpf__ExecuteUbergraph_Text_Size_Slider__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	return; // KCST_GotoReturn
}
void AText_Size_Slider_C__pf3730827578::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_Text_Size_Slider__pf_2(43);
}
void AText_Size_Slider_C__pf3730827578::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_Text_Size_Slider__pf_0(18);
}
void AText_Size_Slider_C__pf3730827578::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Text_Size_Slider__pf_1(1);
}
void AText_Size_Slider_C__pf3730827578::bpf__ChangexLEDS__pfT(UStaticMeshComponent* bpp__LEDxOn__pfT, UStaticMeshComponent* bpp__LEDxOff__pfT)
{
	if(::IsValid(bpp__LEDxOn__pfT))
	{
		bpp__LEDxOn__pfT->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpp__LEDxOff__pfT))
	{
		bpp__LEDxOff__pfT->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	}
}
void AText_Size_Slider_C__pf3730827578::bpf__ResetxLEDS__pfT(UStaticMeshComponent* bpp__LEDxOn__pfT, UStaticMeshComponent* bpp__LEDxOffxx1x__pfTTLK, UStaticMeshComponent* bpp__LEDxOffxx2x__pfTTLK)
{
	if(::IsValid(bpp__LEDxOn__pfT))
	{
		bpp__LEDxOn__pfT->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpp__LEDxOffxx1x__pfTTLK))
	{
		bpp__LEDxOffxx1x__pfTTLK->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	}
	if(::IsValid(bpp__LEDxOffxx2x__pfTTLK))
	{
		bpp__LEDxOffxx2x__pfTTLK->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AText_Size_Slider_C__pf3730827578::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AText_Size_Slider_C__pf3730827578::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/Geometry/Meshes/1M_Cube.1M_Cube 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Slider.Slider 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MenuWorldMiscMaterials/SettingsBox.SettingsBox 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MenuWorldMiscMaterials/LED_Off.LED_Off 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/Latch2_Cue.Latch2_Cue 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MenuWorldMiscMaterials/LED_On.LED_On 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AText_Size_Slider_C__pf3730827578::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{150, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{100, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{122, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuMusicOne_Cue.MenuMusicOne_Cue 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
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
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/MicOn.MicOn 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Mic_Ring.Mic_Ring 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_Cylinder.Microphone_Cylinder 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Stage_Wood.Stage_Wood 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Mic/Microphone_MainMic.Microphone_MainMic 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/Microphone.Microphone 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/MenuGI.MenuGI_C 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/SettingsBox.SettingsBox_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AText_Size_Slider_C__pf3730827578
{
	FRegisterHelper__AText_Size_Slider_C__pf3730827578()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider"), &AText_Size_Slider_C__pf3730827578::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AText_Size_Slider_C__pf3730827578 Instance;
};
FRegisterHelper__AText_Size_Slider_C__pf3730827578 FRegisterHelper__AText_Size_Slider_C__pf3730827578::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
