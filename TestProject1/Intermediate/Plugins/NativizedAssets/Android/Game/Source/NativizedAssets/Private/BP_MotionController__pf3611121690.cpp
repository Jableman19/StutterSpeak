#include "NativizedAssets.h"
#include "BP_MotionController__pf3611121690.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
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
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "RightHand_AnimBP__pf2908282278.h"
#include "Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h"
#include "BeginStutterButton__pf2552470103.h"
#include "MotionControllerPawn__pf3611121690.h"
#include "MenuGI__pf3730827578.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#include "PickupActorInterface__pf3611121690.h"
#include "Floppy__pf3730827578.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_MotionController_C__pf3611121690::ABP_MotionController_C__pf3611121690(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	bpv__HandMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	bpv__HandMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandMesh1"));
	bpv__HandMesh2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandMesh2"));
	bpv__HandHit__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HandHit"));
	bpv__RoomScaleMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomScaleMesh"));
	bpv__Thumb__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Thumb"));
	bpv__Pinky__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Pinky"));
	bpv__Palm__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Palm"));
	bpv__Middle__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Middle"));
	bpv__Index__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Index"));
	bpv__Wrist__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Wrist"));
	bpv__Ring__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Ring"));
	bpv__Capsule__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Scene__pf), false, 0));
	bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__MotionController__pf), false, 0));
	bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__HandMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__HandMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__HandMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__HandMesh__pf->OverrideMaterials.Reserve(1);
	bpv__HandMesh__pf->OverrideMaterials.Add(nullptr);
	bpv__HandMesh__pf->CastShadow = false;
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__HandMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(-12.785664, -0.028015, -1.789026);
	auto& __Local__3 = (*(AccessPrivateProperty<FRotator >((bpv__HandMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__3 = FRotator(0.000000, 0.000000, 90.000000);
	static TWeakFieldPtr<FProperty> __Local__5{};
	const FProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__HandMesh__pf), false, 0));
	bpv__HandMesh__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__HandMesh__pf), false, 0));
	bpv__HandMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh1__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__HandMesh1__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__8{};
	const FProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__HandMesh1__pf), false, 0));
	bpv__HandMesh1__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__HandMesh1__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__HandMesh1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(80.157532, -60.574829, -22.959167);
	auto& __Local__10 = (*(AccessPrivateProperty<FRotator >((bpv__HandMesh1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__10 = FRotator(135.864380, -264.850800, -329.002380);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__HandMesh1__pf), true, 0));
	bpv__HandMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh2__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__HandMesh2__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__HandMesh2__pf), false, 0));
	bpv__HandMesh2__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__HandMesh2__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__HandMesh2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(78.352318, 63.440086, -21.491488);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__HandMesh2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(-44.827671, -453.335541, 30.634811);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__HandMesh2__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__14 = FVector(-1.000000, -1.000000, -1.000000);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__HandMesh2__pf), false, 0));
	bpv__HandMesh2__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__HandMesh2__pf), true, 0));
	bpv__HandHit__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandHit__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandHit__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__HandHit__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__HandHit__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(0.239569, 0.306309, -1.883039);
	auto& __Local__16 = (*(AccessPrivateProperty<FRotator >((bpv__HandHit__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__16 = FRotator(-90.834404, 0.000015, 0.000107);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__HandHit__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__17 = FVector(-0.243308, 0.217237, 0.174624);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__HandHit__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__HandHit__pf), true, 0));
	bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RoomScaleMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__RoomScaleMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__18 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__RoomScaleMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(-10.724748, 0.000002, -1.885202);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__RoomScaleMesh__pf), true, 0));
	bpv__Thumb__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Thumb__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Thumb__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Thumb__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__20 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Thumb__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__20), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__21 = TArray<FResponseChannel> ();
	__Local__21.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__21.GetData(), 8);
	auto& __Local__22 = __Local__21[0];
	__Local__22.Channel = FName(TEXT("Visibility"));
	__Local__22.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__23 = __Local__21[1];
	__Local__23.Channel = FName(TEXT("Camera"));
	__Local__23.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__24 = __Local__21[2];
	__Local__24.Channel = FName(TEXT("WorldStatic"));
	__Local__24.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__25 = __Local__21[3];
	__Local__25.Channel = FName(TEXT("WorldDynamic"));
	__Local__25.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__26 = __Local__21[4];
	__Local__26.Channel = FName(TEXT("Pawn"));
	__Local__26.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__27 = __Local__21[5];
	__Local__27.Channel = FName(TEXT("PhysicsBody"));
	__Local__27.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__28 = __Local__21[6];
	__Local__28.Channel = FName(TEXT("Vehicle"));
	__Local__28.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__29 = __Local__21[7];
	__Local__29.Channel = FName(TEXT("Destructible"));
	__Local__29.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Thumb__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(-1.959189, -0.972496, 3.396292);
	auto& __Local__31 = (*(AccessPrivateProperty<FRotator >((bpv__Thumb__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__31 = FRotator(0.867161, -105.075607, 80.037170);
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__Thumb__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__32 = FVector(0.050000, 0.050000, 0.093750);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Thumb__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Thumb__pf), true, 0));
	bpv__Pinky__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pinky__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Pinky__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Pinky__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__33 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Pinky__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__33), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__34 = TArray<FResponseChannel> ();
	__Local__34.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__34.GetData(), 8);
	auto& __Local__35 = __Local__34[0];
	__Local__35.Channel = FName(TEXT("Visibility"));
	__Local__35.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__36 = __Local__34[1];
	__Local__36.Channel = FName(TEXT("Camera"));
	__Local__36.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__37 = __Local__34[2];
	__Local__37.Channel = FName(TEXT("WorldStatic"));
	__Local__37.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__38 = __Local__34[3];
	__Local__38.Channel = FName(TEXT("WorldDynamic"));
	__Local__38.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__39 = __Local__34[4];
	__Local__39.Channel = FName(TEXT("Pawn"));
	__Local__39.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__40 = __Local__34[5];
	__Local__40.Channel = FName(TEXT("PhysicsBody"));
	__Local__40.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__41 = __Local__34[6];
	__Local__41.Channel = FName(TEXT("Vehicle"));
	__Local__41.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__42 = __Local__34[7];
	__Local__42.Channel = FName(TEXT("Destructible"));
	__Local__42.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__43 = (*(AccessPrivateProperty<FVector >((bpv__Pinky__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__43 = FVector(0.366514, -0.825326, -6.297780);
	auto& __Local__44 = (*(AccessPrivateProperty<FRotator >((bpv__Pinky__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__44 = FRotator(0.000000, -100.000038, 89.999954);
	auto& __Local__45 = (*(AccessPrivateProperty<FVector >((bpv__Pinky__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__45 = FVector(0.050000, 0.050000, 0.093750);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Pinky__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pinky__pf), true, 0));
	bpv__Palm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Palm__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Palm__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Palm__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__46 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Palm__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__46), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__47 = TArray<FResponseChannel> ();
	__Local__47.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__47.GetData(), 8);
	auto& __Local__48 = __Local__47[0];
	__Local__48.Channel = FName(TEXT("Visibility"));
	__Local__48.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__49 = __Local__47[1];
	__Local__49.Channel = FName(TEXT("Camera"));
	__Local__49.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__50 = __Local__47[2];
	__Local__50.Channel = FName(TEXT("WorldStatic"));
	__Local__50.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__51 = __Local__47[3];
	__Local__51.Channel = FName(TEXT("WorldDynamic"));
	__Local__51.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__52 = __Local__47[4];
	__Local__52.Channel = FName(TEXT("Pawn"));
	__Local__52.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__53 = __Local__47[5];
	__Local__53.Channel = FName(TEXT("PhysicsBody"));
	__Local__53.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__54 = __Local__47[6];
	__Local__54.Channel = FName(TEXT("Vehicle"));
	__Local__54.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__55 = __Local__47[7];
	__Local__55.Channel = FName(TEXT("Destructible"));
	__Local__55.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__56 = (*(AccessPrivateProperty<FVector >((bpv__Palm__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__56 = FVector(-4.254833, 1.545063, -2.017201);
	auto& __Local__57 = (*(AccessPrivateProperty<FRotator >((bpv__Palm__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__57 = FRotator(0.000027, 0.000000, 89.999954);
	auto& __Local__58 = (*(AccessPrivateProperty<FVector >((bpv__Palm__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__58 = FVector(0.150000, 0.137500, 0.225000);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Palm__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Palm__pf), true, 0));
	bpv__Middle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Middle__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Middle__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Middle__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__59 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Middle__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__59), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__60 = TArray<FResponseChannel> ();
	__Local__60.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__60.GetData(), 8);
	auto& __Local__61 = __Local__60[0];
	__Local__61.Channel = FName(TEXT("Visibility"));
	__Local__61.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__62 = __Local__60[1];
	__Local__62.Channel = FName(TEXT("Camera"));
	__Local__62.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__63 = __Local__60[2];
	__Local__63.Channel = FName(TEXT("WorldStatic"));
	__Local__63.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__64 = __Local__60[3];
	__Local__64.Channel = FName(TEXT("WorldDynamic"));
	__Local__64.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__65 = __Local__60[4];
	__Local__65.Channel = FName(TEXT("Pawn"));
	__Local__65.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__66 = __Local__60[5];
	__Local__66.Channel = FName(TEXT("PhysicsBody"));
	__Local__66.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__67 = __Local__60[6];
	__Local__67.Channel = FName(TEXT("Vehicle"));
	__Local__67.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__68 = __Local__60[7];
	__Local__68.Channel = FName(TEXT("Destructible"));
	__Local__68.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__69 = (*(AccessPrivateProperty<FVector >((bpv__Middle__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__69 = FVector(3.360427, 2.540913, -2.334554);
	auto& __Local__70 = (*(AccessPrivateProperty<FRotator >((bpv__Middle__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__70 = FRotator(0.000000, -105.000160, 89.999947);
	auto& __Local__71 = (*(AccessPrivateProperty<FVector >((bpv__Middle__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__71 = FVector(0.050000, 0.050000, 0.112500);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Middle__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Middle__pf), true, 0));
	bpv__Index__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Index__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Index__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Index__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__72 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Index__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__72), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__73 = TArray<FResponseChannel> ();
	__Local__73.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__73.GetData(), 8);
	auto& __Local__74 = __Local__73[0];
	__Local__74.Channel = FName(TEXT("Visibility"));
	__Local__74.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__75 = __Local__73[1];
	__Local__75.Channel = FName(TEXT("Camera"));
	__Local__75.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__76 = __Local__73[2];
	__Local__76.Channel = FName(TEXT("WorldStatic"));
	__Local__76.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__77 = __Local__73[3];
	__Local__77.Channel = FName(TEXT("WorldDynamic"));
	__Local__77.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__78 = __Local__73[4];
	__Local__78.Channel = FName(TEXT("Pawn"));
	__Local__78.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__79 = __Local__73[5];
	__Local__79.Channel = FName(TEXT("PhysicsBody"));
	__Local__79.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__80 = __Local__73[6];
	__Local__80.Channel = FName(TEXT("Vehicle"));
	__Local__80.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__81 = __Local__73[7];
	__Local__81.Channel = FName(TEXT("Destructible"));
	__Local__81.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__82 = (*(AccessPrivateProperty<FVector >((bpv__Index__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__82 = FVector(2.574721, 2.660547, 0.606590);
	auto& __Local__83 = (*(AccessPrivateProperty<FRotator >((bpv__Index__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__83 = FRotator(0.000007, -100.000092, 84.999954);
	auto& __Local__84 = (*(AccessPrivateProperty<FVector >((bpv__Index__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__84 = FVector(0.050000, 0.050000, 0.112500);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Index__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Index__pf), true, 0));
	bpv__Wrist__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Wrist__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Wrist__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Wrist__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__85 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Wrist__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__85), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__86 = TArray<FResponseChannel> ();
	__Local__86.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__86.GetData(), 8);
	auto& __Local__87 = __Local__86[0];
	__Local__87.Channel = FName(TEXT("Visibility"));
	__Local__87.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__88 = __Local__86[1];
	__Local__88.Channel = FName(TEXT("Camera"));
	__Local__88.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__89 = __Local__86[2];
	__Local__89.Channel = FName(TEXT("WorldStatic"));
	__Local__89.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__90 = __Local__86[3];
	__Local__90.Channel = FName(TEXT("WorldDynamic"));
	__Local__90.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__91 = __Local__86[4];
	__Local__91.Channel = FName(TEXT("Pawn"));
	__Local__91.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__92 = __Local__86[5];
	__Local__92.Channel = FName(TEXT("PhysicsBody"));
	__Local__92.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__93 = __Local__86[6];
	__Local__93.Channel = FName(TEXT("Vehicle"));
	__Local__93.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__94 = __Local__86[7];
	__Local__94.Channel = FName(TEXT("Destructible"));
	__Local__94.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__95 = (*(AccessPrivateProperty<FVector >((bpv__Wrist__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__95 = FVector(-9.918036, 0.318285, -2.017220);
	auto& __Local__96 = (*(AccessPrivateProperty<FRotator >((bpv__Wrist__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__96 = FRotator(0.000007, -89.999908, 0.000381);
	auto& __Local__97 = (*(AccessPrivateProperty<FVector >((bpv__Wrist__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__97 = FVector(0.075000, 0.075000, 0.075000);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Wrist__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Wrist__pf), true, 0));
	bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ring__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Ring__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Ring__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__98 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Ring__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__98), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__99 = TArray<FResponseChannel> ();
	__Local__99.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__99.GetData(), 8);
	auto& __Local__100 = __Local__99[0];
	__Local__100.Channel = FName(TEXT("Visibility"));
	__Local__100.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__101 = __Local__99[1];
	__Local__101.Channel = FName(TEXT("Camera"));
	__Local__101.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__102 = __Local__99[2];
	__Local__102.Channel = FName(TEXT("WorldStatic"));
	__Local__102.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__103 = __Local__99[3];
	__Local__103.Channel = FName(TEXT("WorldDynamic"));
	__Local__103.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__104 = __Local__99[4];
	__Local__104.Channel = FName(TEXT("Pawn"));
	__Local__104.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__105 = __Local__99[5];
	__Local__105.Channel = FName(TEXT("PhysicsBody"));
	__Local__105.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__106 = __Local__99[6];
	__Local__106.Channel = FName(TEXT("Vehicle"));
	__Local__106.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__107 = __Local__99[7];
	__Local__107.Channel = FName(TEXT("Destructible"));
	__Local__107.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__108 = (*(AccessPrivateProperty<FVector >((bpv__Ring__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__108 = FVector(2.438979, 0.767409, -5.033343);
	auto& __Local__109 = (*(AccessPrivateProperty<FRotator >((bpv__Ring__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__109 = FRotator(0.000000, -105.000053, 89.999947);
	auto& __Local__110 = (*(AccessPrivateProperty<FVector >((bpv__Ring__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__110 = FVector(0.050000, 0.050000, 0.102754);
	(((FBoolProperty*)__Local__4)->SetPropertyValue_InContainer((bpv__Ring__pf), false, 0));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Ring__pf), true, 0));
	bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Capsule__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Capsule__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__111 = (*(AccessPrivateProperty<FVector >((bpv__Capsule__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__111 = FVector(0.144588, -0.262342, -2.153978);
	auto& __Local__112 = (*(AccessPrivateProperty<FRotator >((bpv__Capsule__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__112 = FRotator(-89.563866, 360.000000, 0.000244);
	auto& __Local__113 = (*(AccessPrivateProperty<FVector >((bpv__Capsule__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__113 = FVector(0.191488, 0.147557, 0.168014);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Capsule__pf), true, 0));
	bpv__Hand__pf = EControllerHand::Left;
	bpv__AttachedActor__pf = nullptr;
	bpv__IsTeleporterActive__pf = false;
	bpv__SplineMeshes__pf = TArray<USplineMeshComponent*> ();
	bpv__bLastFrameValidDestination__pf = false;
	bpv__IsRoomScale__pf = false;
	bpv__TeleportDestination__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__IsValidTeleportDestination__pf = false;
	bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
	bpv__bWantsToGrip__pf = false;
	bpv__TeleportRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__TeleportLaunchVelocity__pf = 900.000000f;
	bpv__InitialControllerRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__PhysicalxStutterxButtonxisxPressed__pfTTTT = false;
	bpv__Tags_0__pf = TArray<FName> ();
	bpv__Tags_0__pf.Reserve(1);
	bpv__Tags_0__pf.Add(FName(TEXT("Right")));
	bpv__UsedHand__pf = nullptr;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__114 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__114 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	AutoReceiveInput = EAutoReceiveInput::Type::Player0;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_MotionController_C__pf3611121690::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MotionController__pf)
	{
		bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh__pf)
	{
		bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh1__pf)
	{
		bpv__HandMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh2__pf)
	{
		bpv__HandMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandHit__pf)
	{
		bpv__HandHit__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RoomScaleMesh__pf)
	{
		bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Thumb__pf)
	{
		bpv__Thumb__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pinky__pf)
	{
		bpv__Pinky__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Palm__pf)
	{
		bpv__Palm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Middle__pf)
	{
		bpv__Middle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Index__pf)
	{
		bpv__Index__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Wrist__pf)
	{
		bpv__Wrist__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Ring__pf)
	{
		bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Capsule__pf)
	{
		bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf3611121690::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum.GripEnum")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(URightHand_AnimBP_C__pf2908282278::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABeginStutterButton_C__pf2552470103::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMotionControllerPawn_C__pf3611121690::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMenuGI_C__pf3730827578::StaticClass());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	InDynamicClass->ReferencedConvertedFields.Add(AFloppy_C__pf3730827578::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__115 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_REMOVED_73604AB8494A4F511B55F0A4F1A85DC7"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__115);
	auto __Local__116 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__116);
	auto __Local__117 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__117);
	static TWeakFieldPtr<FProperty> __Local__119{};
	const FProperty* __Local__118 = __Local__119.Get();
	if (nullptr == __Local__118)
	{
		__Local__118 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__118);
		__Local__119 = __Local__118;
	}
	(((FBoolProperty*)__Local__118)->SetPropertyValue_InContainer((__Local__115), false, 0));
	__Local__116->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__116->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__116->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__120 = __Local__116->ComponentDelegateBindings[0];
	__Local__120.ComponentPropertyName = FName(TEXT("HandHit"));
	__Local__120.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__120.FunctionNameToBind = FName(TEXT("BndEvt__BP_MotionController_HandHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	__Local__117->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__117->InputActionDelegateBindings.AddUninitialized(2);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__117->InputActionDelegateBindings.GetData(), 2);
	auto& __Local__121 = __Local__117->InputActionDelegateBindings[0];
	__Local__121.InputActionName = FName(TEXT("Tracking Stutter in Speech w/ Controller"));
	__Local__121.FunctionNameToBind = FName(TEXT("InpActEvt_Tracking Stutter in Speech w/ Controller_K2Node_InputActionEvent_0"));
	auto& __Local__122 = __Local__117->InputActionDelegateBindings[1];
	__Local__122.InputActionName = FName(TEXT("Tracking Stutter in Speech w/ Controller"));
	__Local__122.InputKeyEvent = EInputEvent::IE_Released;
	__Local__122.FunctionNameToBind = FName(TEXT("InpActEvt_Tracking Stutter in Speech w/ Controller_K2Node_InputActionEvent_1"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 59);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = Cast<UStaticMeshComponent>(b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
	b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf))
	{
		bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf->IsSimulatingPhysics(FName(TEXT("None")));
	}
	if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__RumbleController__pf(0.800000);
	return; //KCST_EndOfThread
}
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					bpv__HandHit__pf->USceneComponent::SetWorldScale3D(FVector(0.050000,-0.050000,0.075000));
				}
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Hand__pf), static_cast<uint8>(EControllerHand::Left));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Hand__pf), static_cast<uint8>(EControllerHand::Right));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 34;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				if(::IsValid(bpv__HandMesh2__pf))
				{
					bpv__HandMesh2__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 29:
			{
				if(::IsValid(bpv__HandMesh2__pf))
				{
					bpv__HandMesh2__pf->USceneComponent::SetHiddenInGame(false, false);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__HandMesh1__pf))
				{
					bpv__HandMesh1__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 31:
			{
				if(::IsValid(bpv__HandMesh1__pf))
				{
					bpv__HandMesh1__pf->USceneComponent::SetHiddenInGame(true, false);
				}
			}
		case 32:
			{
				bpv__UsedHand__pf = bpv__HandMesh2__pf;
			}
		case 33:
			{
				Tags = bpv__Tags_0__pf;
				__CurrentState = 13;
				break;
			}
		case 34:
			{
				bpv__UsedHand__pf = bpv__HandMesh1__pf;
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				bpf__SetupRoomScaleOutline__pf();
				__CurrentState = 27;
				break;
			}
		case 47:
			{
				__CurrentState = 42;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

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
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__PhysicalxStutterxButtonxisxPressed__pfTTTT);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				bool  __Local__123 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__SpeechOn__pf) : (__Local__123)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Realsed")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 5.000000);
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf->bpf__StopxTimer__pfT();
				}
			}
		case 7:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf->bpf__ClearxTimer__pfT();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsMenu_GI__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsMenu_GI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bool  __Local__124 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__StutterButtonOn__pf) : (__Local__124)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABeginStutterButton_C__pf2552470103::StaticClass(), /*out*/ TArrayCaster<ABeginStutterButton_C__pf2552470103*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf).Get<AActor*>());
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_AsBegin_Stutter_Button_1__pf = Cast<ABeginStutterButton_C__pf2552470103>(b0l__CallFunc_Array_Get_Item_2__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsBegin_Stutter_Button_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBegin_Stutter_Button_1__pf))
				{
					b0l__K2Node_DynamicCast_AsBegin_Stutter_Button_1__pf->SetActorHiddenInGame(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
			}
		case 38:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(1, 894456219, TEXT("ExecuteUbergraph_BP_MotionController_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::StopHapticEffect(bpv__Hand__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				__CurrentState = 45;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayHapticEffect(CastChecked<UHapticFeedbackEffect_Base>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), bpv__Hand__pf, b0l__K2Node_CustomEvent_Intensity__pf, false);
				}
			}
		case 46:
			{
				UKismetSystemLibrary::Delay(this, 0.050000, FLatentActionInfo(14, -1307154371, TEXT("ExecuteUbergraph_BP_MotionController_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 39:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass(), /*out*/ TArrayCaster<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 40:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf = Cast<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 41:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf))
				{
					b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf->bpf__StartxTimer__pfT();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				__StateStack.Push(39);
			}
		case 49:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABeginStutterButton_C__pf2552470103::StaticClass(), /*out*/ TArrayCaster<ABeginStutterButton_C__pf2552470103*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf).Get<AActor*>());
			}
		case 50:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf = Cast<ABeginStutterButton_C__pf2552470103>(b0l__CallFunc_Array_Get_Item_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 51:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf))
				{
					b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf->SetActorHiddenInGame(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__PhysicalxStutterxButtonxisxPressed__pfTTTT);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 53:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AMotionControllerPawn_C__pf3611121690::StaticClass(), /*out*/ TArrayCaster<AMotionControllerPawn_C__pf3611121690*>(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf).Get<AActor*>());
			}
		case 54:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf3611121690>(b0l__CallFunc_Array_Get_Item_3__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				bool  __Local__127 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__SpeechOn__pf) : (__Local__127)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 56:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Pressed Down")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 5.000000);
				__CurrentState = 48;
				break;
			}
		case 57:
			{
				__CurrentState = 58;
				break;
			}
		case 58:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key__pf;
				__CurrentState = 52;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__ExecuteUbergraph_BP_MotionController__pf_5(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 16:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				if(::IsValid(bpv__HandMesh__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__HandMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf = Cast<URightHand_AnimBP_C__pf2908282278>(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf->bpv__GripState__pf = bpv__GripState__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				__StateStack.Push(17);
			}
		case 22:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__AttachedActor__pf, ((UObject*)nullptr));
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpv__bWantsToGrip__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = 20;
				break;
			}
		case 23:
			{
				bpf__GetActorNearHand__pf(/*out*/ b0l__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 24:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ObjectObject(b0l__CallFunc_GetActorNearHand_NearestMesh__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue_1__pf)
				{
					__CurrentState = 25;
					break;
				}
				__CurrentState = 16;
				break;
			}
		case 25:
			{
				if (!bpv__bWantsToGrip__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = 19;
				break;
			}
		case 26:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				__CurrentState = 21;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__BndEvt__BP_MotionController_HandHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__128;
	T__Local__128& bpp__SweepResult__pf = *const_cast<T__Local__128 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_0(59);
}
void ABP_MotionController_C__pf3611121690::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_1(47);
}
void ABP_MotionController_C__pf3611121690::bpf__RumbleController__pf(float bpp__Intensity__pf)
{
	b0l__K2Node_CustomEvent_Intensity__pf = bpp__Intensity__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_3(44);
}
void ABP_MotionController_C__pf3611121690::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_5(43);
}
void ABP_MotionController_C__pf3611121690::bpf__InpActEvt_TrackingxStutterxinxSpeechxwxxController_K2Node_InputActionEvent_0__pfTTTTET(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_4(57);
}
void ABP_MotionController_C__pf3611121690::bpf__InpActEvt_TrackingxStutterxinxSpeechxwxxController_K2Node_InputActionEvent_1__pfTTTTET(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_2(36);
}
void ABP_MotionController_C__pf3611121690::bpf__UserConstructionScript__pf()
{
	FName bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf{};
	bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorName(CastChecked<UEnum>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf3611121690::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), static_cast<uint8>(bpv__Hand__pf));
	if(::IsValid(bpv__MotionController__pf))
	{
		bpv__MotionController__pf->UMotionControllerComponent::SetTrackingMotionSource(bpfv__CallFunc_GetEnumeratorName_ReturnValue__pf);
	}
}
void ABP_MotionController_C__pf3611121690::bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf)
{
	float bpfv__NearestOverlap__pf{};
	AActor* bpfv__NearestOverlappingActor__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__NearestOverlap__pf = 10000.000000;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__HandHit__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__HandHit__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UPickupActorInterface_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__HandHit__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__HandHit__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__HandHit__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__NearestOverlap__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__HandHit__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__NearestOverlappingActor__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				if(::IsValid(bpv__HandHit__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__HandHit__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__HandHit__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__HandHit__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__NearestOverlap__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestMesh__pf = bpfv__NearestOverlappingActor__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__ReleaseActor__pf()
{
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	USceneComponent* bpfv__CallFunc_GetAttachParent_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	TArray<AFloppy_C__pf3730827578*> bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf{};
	AFloppy_C__pf3730827578* bpfv__CallFunc_Array_Get_Item_1__pf{};
	AFloppy_C__pf3730827578* bpfv__K2Node_DynamicCast_AsFloppy__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = false;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__AttachedActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__AttachedActor__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_GetAttachParent_ReturnValue__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::GetAttachParent();
				}
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_GetAttachParent_ReturnValue__pf, bpv__MotionController__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 4:
			{
				TArray<FName>  __Local__129 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__AttachedActor__pf)) ? (bpv__AttachedActor__pf->Tags) : (__Local__129)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), bpfv__CallFunc_Array_Get_Item__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsFloppy__pf = Cast<AFloppy_C__pf3730827578>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsFloppy__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
				}
			}
		case 7:
			{
				if ( bpv__AttachedActor__pf && bpv__AttachedActor__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__AttachedActor__pf);
					void* IAddress = bpv__AttachedActor__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Drop__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() );
				}
			}
		case 9:
			{
				bpf__RumbleController__pf(0.200000);
			}
		case 10:
			{
				if(::IsValid(bpv__UsedHand__pf))
				{
					bpv__UsedHand__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 11:
			{
				bpv__AttachedActor__pf = ((AActor*)nullptr);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__GrabActor__pf()
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	TArray<AFloppy_C__pf3730827578*> bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf{};
	AActor* bpfv__CallFunc_GetActorNearHand_NearestMesh__pf{};
	AFloppy_C__pf3730827578* bpfv__CallFunc_Array_Get_Item_1__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AFloppy_C__pf3730827578* bpfv__K2Node_DynamicCast_AsFloppy__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__GetActorNearHand__pf(/*out*/ bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__AttachedActor__pf = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf;
			}
		case 4:
			{
				if ( bpfv__CallFunc_GetActorNearHand_NearestMesh__pf && bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
					void* IAddress = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Pickup__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__AttachedActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 7:
			{
				TArray<FName>  __Local__130 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__AttachedActor__pf)) ? (bpv__AttachedActor__pf->Tags) : (__Local__130)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), bpfv__CallFunc_Array_Get_Item__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsFloppy__pf = Cast<AFloppy_C__pf3730827578>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsFloppy__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 9:
			{
				bool  __Local__131 = false;
				if (!((::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf)) ? (bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__Grabbable__pf) : (__Local__131)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__UsedHand__pf))
				{
					bpv__UsedHand__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 12:
			{
				bpf__RumbleController__pf(0.700000);
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpf__RumbleController__pf(1.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__SetupRoomScaleOutline__pf()
{
	float bpfv__ChaperoneMeshHeight__pf{};
	bpfv__ChaperoneMeshHeight__pf = 70.000000;
}
void ABP_MotionController_C__pf3611121690::bpf__UpdateRoomScaleOutline__pf()
{
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__RoomScaleMesh__pf->IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_MakeVector_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf = UKismetMathLibrary::LessLess_VectorRotator(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				if(::IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf3611121690::bpf__DropActor__pf()
{
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	TArray<AFloppy_C__pf3730827578*> bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	AFloppy_C__pf3730827578* bpfv__CallFunc_Array_Get_Item_1__pf{};
	AFloppy_C__pf3730827578* bpfv__K2Node_DynamicCast_AsFloppy__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__AttachedActor__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if ( bpv__AttachedActor__pf && bpv__AttachedActor__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__AttachedActor__pf);
					void* IAddress = bpv__AttachedActor__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Drop__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() );
				}
			}
		case 4:
			{
				TArray<FName>  __Local__132 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpv__AttachedActor__pf)) ? (bpv__AttachedActor__pf->Tags) : (__Local__132)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClassWithTag(this, AFloppy_C__pf3730827578::StaticClass(), bpfv__CallFunc_Array_Get_Item__pf, /*out*/ TArrayCaster<AFloppy_C__pf3730827578*>(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf).Get<AActor*>());
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_AsFloppy__pf = Cast<AFloppy_C__pf3730827578>(bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsFloppy__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
				}
			}
		case 7:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf))
				{
					bpfv__K2Node_DynamicCast_AsFloppy__pf->bpv__StaticMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 8:
			{
				bpv__AttachedActor__pf = ((AActor*)nullptr);
			}
		case 9:
			{
				if(::IsValid(bpv__UsedHand__pf))
				{
					bpv__UsedHand__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf3611121690::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Starter_Content/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/HandMesh.HandMesh 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/HandMesh1.HandMesh1 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{87, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_MotionController_C__pf3611121690::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{74, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{83, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Floppy.Floppy 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Default_Floppy_Base.Default_Floppy_Base 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Silver.Floppy_Silver 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_White.Floppy_White 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FloppyDiskMaterials/Floppy_Black.Floppy_Black 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_2.PickupSound_Cue_2 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/PickupSound_Cue_1.PickupSound_Cue_1 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TriggerBox 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundSubmixBase 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Starter_Content/StarterContent/Audio/Fire_Sparks01.Fire_Sparks01 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/Reset_Data_Base.Reset_Data_Base 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Bottom.Button_Bottom 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.SynthComponent 
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
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioMixer.AudioMixerBlueprintLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio_2.Record_Mic_Audio_2 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserObjectListEntry 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AudioCapture.AudioCaptureComponent 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Engine/EngineSounds/Master.Master 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundSubmix /Game/Stutter_Speak_Content/Record_Mic_Audio.Record_Mic_Audio 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
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
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/FaderMaterial.FaderMaterial 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundWave 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Starter_Content/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Starter_Content/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Starter_Content/Geometry/Meshes/1M_Cube.1M_Cube 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Start.Button_Start 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ButtonMaterials/Button_Top.Button_Top 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Starter_Content/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint.Stutter_Timer__Empty_Object__Blueprint_C 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Pre-Fabs/BeginStutterButton.BeginStutterButton_C 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/MenuGI.MenuGI_C 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Stutter_Speak_Content/Blueprints/Floppy.Floppy_C 
		{153, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum.GripEnum 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_MotionController_C__pf3611121690
{
	FRegisterHelper__ABP_MotionController_C__pf3611121690()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/BP_MotionController"), &ABP_MotionController_C__pf3611121690::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_MotionController_C__pf3611121690 Instance;
};
FRegisterHelper__ABP_MotionController_C__pf3611121690 FRegisterHelper__ABP_MotionController_C__pf3611121690::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
