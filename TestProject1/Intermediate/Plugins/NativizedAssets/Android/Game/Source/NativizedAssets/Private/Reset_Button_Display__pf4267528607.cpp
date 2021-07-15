#include "NativizedAssets.h"
#include "Reset_Button_Display__pf4267528607.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
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
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
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
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UReset_Button_Display_C__pf4267528607::UReset_Button_Display_C__pf4267528607(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Border_0__pf = nullptr;
	bpv__Name1__pf = nullptr;
	bpv__Name2__pf = nullptr;
	bpv__Name3__pf = nullptr;
	bpv__Name4__pf = nullptr;
	bpv__Name5__pf = nullptr;
	bpv__Name6__pf = nullptr;
	bpv__Name7__pf = nullptr;
	bpv__Timexperxloop__pfTT = 0.000000f;
	bpv__TextxtoxDisplay__pfTT = FString(TEXT(""));
	bpv__Timex1__pfT = 0.000000f;
	bpv__Timex2__pfT = 0.000000f;
	bpv__Timex3__pfT = 0.000000f;
	bpv__Timex4__pfT = 0.000000f;
	bpv__Timex5__pfT = 0.000000f;
	bpv__Timex6__pfT = 0.000000f;
	bpv__Timex7__pfT = 0.000000f;
	bpv__1__pf = false;
	bpv__2__pf = false;
	bpv__3__pf = false;
	bpv__4__pf = false;
	bpv__5__pf = false;
	bpv__6__pf = false;
	bpv__7__pf = false;
	bpv__Duration__pf = 0.010000f;
	bpv__TimexIncrementing__pfT = 2.500000f;
	bpv__PositionxIncrementing__pfT = 2.500000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UReset_Button_Display_C__pf4267528607::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UReset_Button_Display_C__pf4267528607::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(8);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Right = 600.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 175.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UBorder>(__Local__0, TEXT("Border_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.000000, 0.586355, 0.770833, 1.000000);
	__Local__4->Slot = __Local__3;
	__Local__4->bIsVariable = true;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = 610.000000f;
	__Local__6->LayoutData.Offsets.Top = 24.000000f;
	__Local__6->bAutoSize = true;
	__Local__6->Parent = __Local__1;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, TEXT("Name1"), (EObjectFlags)0x00280008);
	__Local__7->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"B5DDBD194984178B3D81EF8410883AF5\", \"Text\")")	);
	__Local__7->Font.Size = 80;
	__Local__7->Slot = __Local__6;
	__Local__7->bIsVariable = true;
	__Local__6->Content = __Local__7;
	__Local__2.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Left = 610.000000f;
	__Local__8->LayoutData.Offsets.Top = 24.000000f;
	__Local__8->bAutoSize = true;
	__Local__8->Parent = __Local__1;
	auto __Local__9 = NewObject<UTextBlock>(__Local__0, TEXT("Name2"), (EObjectFlags)0x00280008);
	__Local__9->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"609F826A410540DEB6A392BA52713FC3\", \"Text\")")	);
	__Local__9->Font.Size = 80;
	__Local__9->Slot = __Local__8;
	__Local__9->bIsVariable = true;
	__Local__8->Content = __Local__9;
	__Local__2.Add(__Local__8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 610.000000f;
	__Local__10->LayoutData.Offsets.Top = 24.000000f;
	__Local__10->bAutoSize = true;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, TEXT("Name3"), (EObjectFlags)0x00280008);
	__Local__11->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"852DDBB144101BCA9535439C72C9F1B9\", \"Text\")")	);
	__Local__11->Font.Size = 80;
	__Local__11->Slot = __Local__10;
	__Local__11->bIsVariable = true;
	__Local__10->Content = __Local__11;
	__Local__2.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = 610.000000f;
	__Local__12->LayoutData.Offsets.Top = 24.000000f;
	__Local__12->LayoutData.Offsets.Right = 0.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__12->bAutoSize = true;
	__Local__12->Parent = __Local__1;
	auto __Local__13 = NewObject<UTextBlock>(__Local__0, TEXT("Name4"), (EObjectFlags)0x00280008);
	__Local__13->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"852DDBB144101BCA9535439C72C9F1B9\", \"Text\")")	);
	__Local__13->Font.Size = 80;
	__Local__13->Slot = __Local__12;
	__Local__13->bIsVariable = true;
	__Local__12->Content = __Local__13;
	__Local__2.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 610.000000f;
	__Local__14->LayoutData.Offsets.Top = 24.000000f;
	__Local__14->LayoutData.Offsets.Right = 0.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__14->bAutoSize = true;
	__Local__14->Parent = __Local__1;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("Name5"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"852DDBB144101BCA9535439C72C9F1B9\", \"Text\")")	);
	__Local__15->Font.Size = 80;
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__14->Content = __Local__15;
	__Local__2.Add(__Local__14);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = 610.000000f;
	__Local__16->LayoutData.Offsets.Top = 24.000000f;
	__Local__16->LayoutData.Offsets.Right = 0.000000f;
	__Local__16->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__16->bAutoSize = true;
	__Local__16->Parent = __Local__1;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, TEXT("Name6"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"852DDBB144101BCA9535439C72C9F1B9\", \"Text\")")	);
	__Local__17->Font.Size = 80;
	__Local__17->Slot = __Local__16;
	__Local__17->bIsVariable = true;
	__Local__16->Content = __Local__17;
	__Local__2.Add(__Local__16);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 610.000000f;
	__Local__18->LayoutData.Offsets.Top = 24.000000f;
	__Local__18->LayoutData.Offsets.Right = 0.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__18->bAutoSize = true;
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, TEXT("Name7"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB00C93748955CEDEF4DA4B125A8836D]\", \"852DDBB144101BCA9535439C72C9F1B9\", \"Text\")")	);
	__Local__19->Font.Size = 80;
	__Local__19->Slot = __Local__18;
	__Local__19->bIsVariable = true;
	__Local__18->Content = __Local__19;
	__Local__2.Add(__Local__18);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UReset_Button_Display_C__pf4267528607::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__20;
	SlotNames.Append(__Local__20);
}
void UReset_Button_Display_C__pf4267528607::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__21;
	TArray<FDelegateRuntimeBinding>  __Local__22;
	__Local__22.AddUninitialized(7);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__22.GetData(), 7);
	auto& __Local__23 = __Local__22[0];
	__Local__23.ObjectName = FString(TEXT("Name2"));
	__Local__23.PropertyName = FName(TEXT("Text"));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__23.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__24 = TArray<FPropertyPathSegment> ();
	__Local__24.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__24.GetData(), 1);
	auto& __Local__25 = __Local__24[0];
	__Local__25.Name = FName(TEXT("Text to Display"));
	__Local__23.Kind = EBindingKind::Property;
	auto& __Local__26 = __Local__22[1];
	__Local__26.ObjectName = FString(TEXT("Name1"));
	__Local__26.PropertyName = FName(TEXT("Text"));
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__26.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__27 = TArray<FPropertyPathSegment> ();
	__Local__27.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__27.GetData(), 1);
	auto& __Local__28 = __Local__27[0];
	__Local__28.Name = FName(TEXT("Text to Display"));
	__Local__26.Kind = EBindingKind::Property;
	auto& __Local__29 = __Local__22[2];
	__Local__29.ObjectName = FString(TEXT("Name3"));
	__Local__29.PropertyName = FName(TEXT("Text"));
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__29.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__30 = TArray<FPropertyPathSegment> ();
	__Local__30.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__30.GetData(), 1);
	auto& __Local__31 = __Local__30[0];
	__Local__31.Name = FName(TEXT("Text to Display"));
	__Local__29.Kind = EBindingKind::Property;
	auto& __Local__32 = __Local__22[3];
	__Local__32.ObjectName = FString(TEXT("Name7"));
	__Local__32.PropertyName = FName(TEXT("Text"));
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__32.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__33 = TArray<FPropertyPathSegment> ();
	__Local__33.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__33.GetData(), 1);
	auto& __Local__34 = __Local__33[0];
	__Local__34.Name = FName(TEXT("Text to Display"));
	__Local__32.Kind = EBindingKind::Property;
	auto& __Local__35 = __Local__22[4];
	__Local__35.ObjectName = FString(TEXT("Name6"));
	__Local__35.PropertyName = FName(TEXT("Text"));
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__35.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__36 = TArray<FPropertyPathSegment> ();
	__Local__36.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__36.GetData(), 1);
	auto& __Local__37 = __Local__36[0];
	__Local__37.Name = FName(TEXT("Text to Display"));
	__Local__35.Kind = EBindingKind::Property;
	auto& __Local__38 = __Local__22[5];
	__Local__38.ObjectName = FString(TEXT("Name5"));
	__Local__38.PropertyName = FName(TEXT("Text"));
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__38.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__39 = TArray<FPropertyPathSegment> ();
	__Local__39.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__39.GetData(), 1);
	auto& __Local__40 = __Local__39[0];
	__Local__40.Name = FName(TEXT("Text to Display"));
	__Local__38.Kind = EBindingKind::Property;
	auto& __Local__41 = __Local__22[6];
	__Local__41.ObjectName = FString(TEXT("Name4"));
	__Local__41.PropertyName = FName(TEXT("Text"));
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__41.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__42 = TArray<FPropertyPathSegment> ();
	__Local__42.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__42.GetData(), 1);
	auto& __Local__43 = __Local__42[0];
	__Local__43.Name = FName(TEXT("Text to Display"));
	__Local__41.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UReset_Button_Display_C__pf4267528607::StaticClass())->MiscConvertedSubobjects[0]), __Local__21, __Local__22);
}
void UReset_Button_Display_C__pf4267528607::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_0(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_26__pf{};
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_10__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_20__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_19__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_9__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_27__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_21__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_9__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_20__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_10__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				bpf__RecursiveCall7BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 91:
			{
				__CurrentState = 92;
				break;
			}
		case 92:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex7__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_6__pf)
				{
					__CurrentState = 100;
					break;
				}
			}
		case 93:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name7__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_21__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_21__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_32__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_32__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_9__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_32__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_10__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_9__pf, b0l__CallFunc_BreakVector2D_Y_32__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_28__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_10__pf);
				}
			}
		case 94:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_20__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex7__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex7__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_20__pf;
			}
		case 95:
			{
				if (!bpv__7__pf)
				{
					__CurrentState = 97;
					break;
				}
			}
		case 96:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(13, 1551830917, TEXT("ExecuteUbergraph_Reset_Button_Display_0"), this));
				__CurrentState = -1;
				break;
			}
		case 97:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_26__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name7__pf);
				if(::IsValid(bpv__Name7__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_10__pf = bpv__Name7__pf->UWidget::GetDesiredSize();
				}
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_26__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_20__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_26__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_10__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_30__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_30__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_20__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_31__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_31__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_19__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_31__pf, b0l__CallFunc_BreakVector2D_X_30__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_9__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_19__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_9__pf)
				{
					__CurrentState = 96;
					break;
				}
			}
		case 98:
			{
				bpv__7__pf = true;
			}
		case 99:
			{
				bpf__Starting1BySelf__pf();
				__CurrentState = 96;
				break;
			}
		case 100:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_27__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name7__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_27__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_27__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 101:
			{
				bpv__Timex7__pfT = 0.000000;
			}
		case 102:
			{
				bpv__7__pf = false;
				__CurrentState = -1;
				break;
			}
		case 106:
			{
				__CurrentState = 92;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_1(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_23__pf{};
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_9__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_18__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_17__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_24__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_8__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_19__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_8__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_18__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_9__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				bpf__RecursiveCall6BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 79:
			{
				__CurrentState = 80;
				break;
			}
		case 80:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex6__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf)
				{
					__CurrentState = 88;
					break;
				}
			}
		case 81:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name6__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_19__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_19__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_29__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_29__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_8__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_29__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_9__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_8__pf, b0l__CallFunc_BreakVector2D_Y_29__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_25__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_9__pf);
				}
			}
		case 82:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_18__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex6__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex6__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_18__pf;
			}
		case 83:
			{
				if (!bpv__6__pf)
				{
					__CurrentState = 85;
					break;
				}
			}
		case 84:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(11, 1390710813, TEXT("ExecuteUbergraph_Reset_Button_Display_1"), this));
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_23__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name6__pf);
				if(::IsValid(bpv__Name6__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_9__pf = bpv__Name6__pf->UWidget::GetDesiredSize();
				}
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_23__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_18__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_23__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_9__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_27__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_27__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_18__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_28__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_28__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_17__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_28__pf, b0l__CallFunc_BreakVector2D_X_27__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_8__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_17__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_8__pf)
				{
					__CurrentState = 84;
					break;
				}
			}
		case 86:
			{
				bpv__6__pf = true;
			}
		case 87:
			{
				bpf__Starting7BySelf__pf();
				__CurrentState = 84;
				break;
			}
		case 88:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_24__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name6__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_24__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_24__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 89:
			{
				bpv__Timex6__pfT = 0.000000;
			}
		case 90:
			{
				bpv__6__pf = false;
				__CurrentState = -1;
				break;
			}
		case 105:
			{
				__CurrentState = 80;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_2(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_21__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_16__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_8__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_22__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_17__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_15__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_7__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_8__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_16__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				bpf__RecursiveCall5BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 67:
			{
				__CurrentState = 68;
				break;
			}
		case 68:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex5__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name5__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_16__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_16__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_24__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_24__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_24__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_8__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf, b0l__CallFunc_BreakVector2D_Y_24__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_20__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_8__pf);
				}
			}
		case 70:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_16__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex5__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex5__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_16__pf;
			}
		case 71:
			{
				if (!bpv__5__pf)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 72:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(9, -667615133, TEXT("ExecuteUbergraph_Reset_Button_Display_2"), this));
				__CurrentState = -1;
				break;
			}
		case 73:
			{
				if(::IsValid(bpv__Name5__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_8__pf = bpv__Name5__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_22__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name5__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_8__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_25__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_25__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_22__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_17__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_22__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_17__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_26__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_26__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_15__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_26__pf, b0l__CallFunc_BreakVector2D_X_25__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_15__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_7__pf)
				{
					__CurrentState = 72;
					break;
				}
			}
		case 74:
			{
				bpv__5__pf = true;
			}
		case 75:
			{
				bpf__Starting6BySelf__pf();
				__CurrentState = 72;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_21__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name5__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_21__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_21__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 77:
			{
				bpv__Timex5__pfT = 0.000000;
			}
		case 78:
			{
				bpv__5__pf = false;
				__CurrentState = -1;
				break;
			}
		case 104:
			{
				__CurrentState = 68;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_3(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_17__pf{};
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_14__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_13__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_6__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_15__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_19__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_14__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_7__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf{};
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
				bpf__RecursiveCall4BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 55:
			{
				__CurrentState = 56;
				break;
			}
		case 56:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex4__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 57:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name4__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_15__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_15__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_23__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_23__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_23__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_7__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf, b0l__CallFunc_BreakVector2D_Y_23__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_18__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_7__pf);
				}
			}
		case 58:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_14__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex4__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex4__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_14__pf;
			}
		case 59:
			{
				if (!bpv__4__pf)
				{
					__CurrentState = 61;
					break;
				}
			}
		case 60:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(7, 92179451, TEXT("ExecuteUbergraph_Reset_Button_Display_3"), this));
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_17__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name4__pf);
				if(::IsValid(bpv__Name4__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_7__pf = bpv__Name4__pf->UWidget::GetDesiredSize();
				}
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_17__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_14__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_17__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_7__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_21__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_21__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_14__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_22__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_22__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_13__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_22__pf, b0l__CallFunc_BreakVector2D_X_21__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_13__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_6__pf)
				{
					__CurrentState = 60;
					break;
				}
			}
		case 62:
			{
				bpv__4__pf = true;
			}
		case 63:
			{
				bpf__Starting5BySelf__pf();
				__CurrentState = 60;
				break;
			}
		case 64:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_19__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name4__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_19__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_19__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 65:
			{
				bpv__Timex4__pfT = 0.000000;
			}
		case 66:
			{
				bpv__4__pf = false;
				__CurrentState = -1;
				break;
			}
		case 103:
			{
				__CurrentState = 56;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_6__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_14__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_12__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_11__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_12__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_15__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_13__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_6__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				bpf__RecursiveCall3BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex3__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 48;
					break;
				}
			}
		case 41:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_13__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_13__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_20__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_20__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_20__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_6__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf, b0l__CallFunc_BreakVector2D_Y_20__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_16__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_6__pf);
				}
			}
		case 42:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_12__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex3__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex3__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_12__pf;
			}
		case 43:
			{
				if (!bpv__3__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 44:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(5, -1057267451, TEXT("ExecuteUbergraph_Reset_Button_Display_4"), this));
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				if(::IsValid(bpv__Name3__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_6__pf = bpv__Name3__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_14__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_18__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_18__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_14__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_12__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_14__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_12__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_19__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_19__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_11__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_19__pf, b0l__CallFunc_BreakVector2D_X_18__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_11__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_5__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 46:
			{
				bpv__3__pf = true;
			}
		case 47:
			{
				bpf__Starting4BySelf__pf();
				__CurrentState = 44;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_15__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_15__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_15__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 49:
			{
				bpv__Timex3__pfT = 0.000000;
			}
		case 50:
			{
				bpv__3__pf = false;
				__CurrentState = -1;
				break;
			}
		case 143:
			{
				__CurrentState = 40;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_5__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_11__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_10__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_9__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_10__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_4__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_12__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_11__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				bpf__RecursiveCall2BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex2__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 29:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_11__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_11__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_17__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_17__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_17__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf, b0l__CallFunc_BreakVector2D_Y_17__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_13__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf);
				}
			}
		case 30:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_10__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex2__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex2__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_10__pf;
			}
		case 31:
			{
				if (!bpv__2__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 32:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(3, -722258599, TEXT("ExecuteUbergraph_Reset_Button_Display_5"), this));
				__CurrentState = -1;
				break;
			}
		case 33:
			{
				if(::IsValid(bpv__Name2__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_5__pf = bpv__Name2__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_11__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_5__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_15__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_15__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_11__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_10__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_11__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_10__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_16__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_16__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_9__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_16__pf, b0l__CallFunc_BreakVector2D_X_15__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_9__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_4__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 34:
			{
				bpv__2__pf = true;
			}
		case 35:
			{
				bpf__Starting3BySelf__pf();
				__CurrentState = 32;
				break;
			}
		case 36:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_12__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_12__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_12__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 37:
			{
				bpv__Timex2__pfT = 0.000000;
			}
		case 38:
			{
				bpv__2__pf = false;
				__CurrentState = -1;
				break;
			}
		case 144:
			{
				__CurrentState = 28;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_6(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_4__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_8__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_8__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_8__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_9__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_9__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf(EForceInit::ForceInit);
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
				bpf__RecursiveCall1BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Timex1__pfT, bpv__Timexperxloop__pfTT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_9__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_9__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_14__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_14__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector2D_X_14__pf, bpv__PositionxIncrementing__pfT);
				bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf, b0l__CallFunc_BreakVector2D_Y_14__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_10__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf);
				}
			}
		case 18:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_8__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Timex1__pfT, bpv__TimexIncrementing__pfT);
				bpv__Timex1__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_8__pf;
			}
		case 19:
			{
				if (!bpv__1__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 20:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(1, 1614351032, TEXT("ExecuteUbergraph_Reset_Button_Display_6"), this));
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_9__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_9__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_9__pf->UCanvasPanelSlot::SetPosition(FVector2D(610.000000,24.000000));
				}
			}
		case 22:
			{
				bpv__Timex1__pfT = 0.000000;
			}
		case 23:
			{
				bpv__1__pf = false;
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__Name1__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_4__pf = bpv__Name1__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_8__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_12__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_12__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_8__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_8__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_8__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_8__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_13__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_13__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_13__pf, b0l__CallFunc_BreakVector2D_X_12__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 25:
			{
				bpv__1__pf = true;
			}
		case 26:
			{
				bpf__Starting2BySelf__pf();
				__CurrentState = 20;
				break;
			}
		case 145:
			{
				__CurrentState = 16;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_7(int32 bpp__EntryPoint__pf)
{
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 51:
			{
				UWidget::ForceLayoutPrepass();
			}
		case 52:
			{
				if(::IsValid(bpv__Name1__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue__pf = bpv__Name1__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector2D_X__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X__pf, b0l__CallFunc_BreakVector2D_X_1__pf);
				bpv__Timexperxloop__pfTT = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 53:
			{
				bpf__SetxTime__pfT(0.000000);
			}
		case 54:
			{
				bpf__SetStarterTextBySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 114:
			{
				bpv__TextxtoxDisplay__pfTT = FString(TEXT("~No Name~"));
				__CurrentState = 51;
				break;
			}
		case 140:
			{
				__CurrentState = 141;
				break;
			}
		case 141:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(b0l__K2Node_CustomEvent_Display_Name__pf, FString(TEXT("")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 142;
					break;
				}
				__CurrentState = 114;
				break;
			}
		case 142:
			{
				bpv__TextxtoxDisplay__pfTT = b0l__K2Node_CustomEvent_Display_Name__pf;
				__CurrentState = 51;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_8(int32 bpp__EntryPoint__pf)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_2__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_6__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_7__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 115:
			{
				__CurrentState = 116;
				break;
			}
		case 116:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_1__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_2__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(60.000000, b0l__CallFunc_BreakVector2D_Y_2__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 117:
			{
				bpv__Timex1__pfT = 550.000000;
			}
		case 118:
			{
				if(::IsValid(bpv__Name1__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf = bpv__Name1__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_2__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_4__pf, b0l__CallFunc_BreakVector2D_X_3__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 136;
					break;
				}
			}
		case 119:
			{
				bpv__1__pf = true;
			}
		case 120:
			{
				if(::IsValid(bpv__Name1__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf = bpv__Name1__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_2__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_4__pf);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_4__pf, b0l__CallFunc_BreakVector2D_X_3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_3__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::GetPosition();
				}
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 135.000000);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_5__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_5__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, b0l__CallFunc_BreakVector2D_Y_5__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
			}
		case 121:
			{
				if(::IsValid(bpv__Name1__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf = bpv__Name1__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_2__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_4__pf, b0l__CallFunc_BreakVector2D_X_3__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 135.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(610.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf);
				bpv__Timex1__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 122:
			{
				if(::IsValid(bpv__Name2__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf = bpv__Name2__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_6__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_4__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_7__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_7__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_7__pf, b0l__CallFunc_BreakVector2D_X_6__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 134;
					break;
				}
			}
		case 123:
			{
				bpv__2__pf = true;
			}
		case 124:
			{
				if(::IsValid(bpv__Name2__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf = bpv__Name2__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_6__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_4__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_7__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_7__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_7__pf, b0l__CallFunc_BreakVector2D_X_6__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, 135.000000);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_5__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_5__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_8__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_8__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf, b0l__CallFunc_BreakVector2D_Y_8__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf);
				}
			}
		case 125:
			{
				if(::IsValid(bpv__Name2__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf = bpv__Name2__pf->UWidget::GetDesiredSize();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_6__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_4__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_4__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_7__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_7__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_7__pf, b0l__CallFunc_BreakVector2D_X_6__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, 135.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(610.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf);
				bpv__Timex2__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf;
			}
		case 126:
			{
				if(::IsValid(bpv__Name3__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf = bpv__Name3__pf->UWidget::GetDesiredSize();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_9__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_9__pf);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_6__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_10__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_10__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_10__pf, b0l__CallFunc_BreakVector2D_X_9__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, 475.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 137;
					break;
				}
			}
		case 127:
			{
				bpv__3__pf = true;
			}
		case 128:
			{
				if(::IsValid(bpv__Name3__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf = bpv__Name3__pf->UWidget::GetDesiredSize();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_9__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_9__pf);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_6__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf->UCanvasPanelSlot::GetPosition();
				}
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name4__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_10__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_10__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_7__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf->UCanvasPanelSlot::GetPosition();
				}
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_10__pf, b0l__CallFunc_BreakVector2D_X_9__pf);
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_7__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_11__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_11__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, 135.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf, b0l__CallFunc_BreakVector2D_Y_11__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_7__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf);
				}
			}
		case 129:
			{
				if(::IsValid(bpv__Name3__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf = bpv__Name3__pf->UWidget::GetDesiredSize();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_9__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_9__pf);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_6__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_6__pf, /*out*/ b0l__CallFunc_BreakVector2D_X_10__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_10__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector2D_X_10__pf, b0l__CallFunc_BreakVector2D_X_9__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, 135.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(610.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf);
				bpv__Timex3__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf;
			}
		case 130:
			{
				bpf__Starting1BySelf__pf();
			}
		case 131:
			{
				bpf__Starting2BySelf__pf();
			}
		case 132:
			{
				bpf__Starting3BySelf__pf();
			}
		case 133:
			{
				bpf__Starting4BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 134:
			{
				bpf__Starting1BySelf__pf();
			}
		case 135:
			{
				bpf__Starting2BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 136:
			{
				bpf__Starting1BySelf__pf();
				__CurrentState = -1;
				break;
			}
		case 137:
			{
				bpf__Starting1BySelf__pf();
			}
		case 138:
			{
				bpf__Starting2BySelf__pf();
			}
		case 139:
			{
				bpf__Starting3BySelf__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 113);
	// optimized KCST_UnconditionalGoto
	bpf__SetxPosition__pfT(FVector2D(610.000000,24.000000));
	bpf__SetxTime__pfT(0.000000);
	return; //KCST_EndOfThread
}
void UReset_Button_Display_C__pf4267528607::bpf__ExecuteUbergraph_Reset_Button_Display__pf_10(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 107:
			{
				__StateStack.Push(109);
			}
		case 108:
			{
				bpf__SetxTime__pfT(bpv__Timexperxloop__pfTT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 109:
			{
				bpf__SetxPosition__pfT(FVector2D(610.000000,24.000000));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 110:
			{
				__CurrentState = 107;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting1BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_6(145);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting2BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_5(144);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting3BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_4(143);
}
void UReset_Button_Display_C__pf4267528607::bpf__EnableDisplayByFloppyText__pf(const FString& bpp__DisplayxName__pfT__const)
{
	typedef FString  T__Local__51;
	T__Local__51& bpp__DisplayxName__pfT = *const_cast<T__Local__51 *>(&bpp__DisplayxName__pfT__const);
	b0l__K2Node_CustomEvent_Display_Name__pf = bpp__DisplayxName__pfT;
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_7(140);
}
void UReset_Button_Display_C__pf4267528607::bpf__SetStarterTextBySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_8(115);
}
void UReset_Button_Display_C__pf4267528607::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_9(113);
}
void UReset_Button_Display_C__pf4267528607::bpf__StopDisplayingByProjector__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_10(110);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall7BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_0(106);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall6BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_1(105);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall5BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_2(104);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall4BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_3(103);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting7BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_0(91);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting6BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_1(79);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting5BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_2(67);
}
void UReset_Button_Display_C__pf4267528607::bpf__Starting4BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_3(55);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall3BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_4(39);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall2BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_5(27);
}
void UReset_Button_Display_C__pf4267528607::bpf__RecursiveCall1BySelf__pf()
{
	bpf__ExecuteUbergraph_Reset_Button_Display__pf_6(15);
}
void UReset_Button_Display_C__pf4267528607::bpf__SetxTime__pfT(float bpp__TimextoxSet__pfTT)
{
	bpv__Timex1__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex2__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex3__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex4__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex5__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex6__pfT = bpp__TimextoxSet__pfTT;
	bpv__Timex7__pfT = bpp__TimextoxSet__pfTT;
}
void UReset_Button_Display_C__pf4267528607::bpf__SetxPosition__pfT(FVector2D bpp__PositionxtoxSet__pfTT)
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf{};
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name1__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name2__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name3__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name4__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name5__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name6__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Name7__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(bpp__PositionxtoxSet__pfTT);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UReset_Button_Display_C__pf4267528607::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UReset_Button_Display_C__pf4267528607::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UReset_Button_Display_C__pf4267528607
{
	FRegisterHelper__UReset_Button_Display_C__pf4267528607()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Reset_Button_Display"), &UReset_Button_Display_C__pf4267528607::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UReset_Button_Display_C__pf4267528607 Instance;
};
FRegisterHelper__UReset_Button_Display_C__pf4267528607 FRegisterHelper__UReset_Button_Display_C__pf4267528607::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
