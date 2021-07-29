#include "NativizedAssets.h"
#include "ResultsForSwitcher__pf517162645.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
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
#include "MenuGI__pf3730827578.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UResultsForSwitcher_C__pf517162645::UResultsForSwitcher_C__pf517162645(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background__pf = nullptr;
	bpv__EffectivenessStar__pf = nullptr;
	bpv__FluencyBaseImage__pf = nullptr;
	bpv__FluencyBaseImage_1__pf = nullptr;
	bpv__FluencyStar__pf = nullptr;
	bpv__TextBlock_0__pf = nullptr;
	bpv__TextBlock_1__pf = nullptr;
	bpv__TextBlock_2__pf = nullptr;
	bpv__TextBlock_5__pf = nullptr;
	bpv__TextBlock_9__pf = nullptr;
	bpv__TextBlock_10__pf = nullptr;
	bpv__TextBlock_49__pf = nullptr;
	bpv__TextBlock_331__pf = nullptr;
	bpv__SpeechxName__pfT = FString(TEXT(""));
	bpv__Attemptxx__pfTQ = FString(TEXT(""));
	bpv__TotalxTimexTaken__pfTT = FString(TEXT(""));
	bpv__TotalxTImexstuttering__pfTT = FString(TEXT(""));
	bpv__AudiencexLookingxx__pfTTO = FString(TEXT(""));
	bpv__SatisfactionxRating__pfT = FString(TEXT(""));
	bpv__FluencyxRating__pfT = FString(TEXT(""));
	bpv__PercentSpeechStuttering__pf = FString(TEXT(""));
	bpv__MAT__pf = nullptr;
	bpv__MiddleButton__pf = FString(TEXT("COMPARE"));
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UResultsForSwitcher_C__pf517162645::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UResultsForSwitcher_C__pf517162645::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(18);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Right = 1600.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 750.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UImage>(__Local__0, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__4->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.000000, 0.120237, 0.562500, 1.000000);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = 500.000000f;
	__Local__6->LayoutData.Offsets.Top = 256.000000f;
	__Local__6->LayoutData.Offsets.Right = 250.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 250.000000f;
	__Local__6->Parent = __Local__1;
	auto __Local__7 = NewObject<UImage>(__Local__0, TEXT("EffectivenessStar"), (EObjectFlags)0x00280008);
	__Local__7->Brush.ImageSize = FVector2D(1200.000000, 1200.000000);
	auto& __Local__8 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__7->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__8 = FLinearColor(1.000000, 0.603140, 0.000000, 1.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<UObject* >(&(__Local__7->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__9 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultsForSwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Slot = __Local__6;
	__Local__7->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__6->Content = __Local__7;
	__Local__2.Add(__Local__6);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_26"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 1180.000000f;
	__Local__10->LayoutData.Offsets.Top = 256.000000f;
	__Local__10->LayoutData.Offsets.Right = 250.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 250.000000f;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UImage>(__Local__0, TEXT("FluencyStar"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(1200.000000, 1200.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(1.000000, 0.603140, 0.000000, 1.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultsForSwitcher_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__11->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__10->Content = __Local__11;
	__Local__2.Add(__Local__10);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 202.057556f;
	__Local__14->LayoutData.Offsets.Top = 56.000000f;
	__Local__14->LayoutData.Offsets.Right = 524.707031f;
	__Local__14->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__14->Parent = __Local__1;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"B1019E524D3CB0A821EE40821D5AFA8B\", \"Speech Name\")")	);
	__Local__15->Font.Size = 38;
	static TWeakFieldPtr<FProperty> __Local__17{};
	const FProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((__Local__15), true, 0));
	__Local__15->Slot = __Local__14;
	__Local__15->RenderTransform.Translation = FVector2D(-175.000000, 0.000000);
	__Local__14->Content = __Local__15;
	__Local__2.Add(__Local__14);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 780.000000f;
	__Local__18->LayoutData.Offsets.Top = 56.000000f;
	__Local__18->LayoutData.Offsets.Right = 367.216217f;
	__Local__18->LayoutData.Offsets.Bottom = 37.330666f;
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"5E2470A34A99D2C67CE4E392084F0367\", \"Attempt #\")")	);
	__Local__19->Font.Size = 38;
	auto& __Local__20 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__19), UTextLayoutWidget::__PPO__Justification() )));
	__Local__20 = ETextJustify::Type::Center;
	__Local__19->Slot = __Local__18;
	__Local__19->RenderTransform.Translation = FVector2D(-175.000000, 0.000000);
	__Local__18->Content = __Local__19;
	__Local__2.Add(__Local__18);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = 1394.091553f;
	__Local__21->LayoutData.Offsets.Top = 56.000000f;
	__Local__21->LayoutData.Offsets.Right = 151.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__21->Parent = __Local__1;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"235A44084AF6176092D441BFEA915DE1\", \"Time:  00:00\")")	);
	__Local__22->Font.Size = 38;
	__Local__22->Slot = __Local__21;
	__Local__22->RenderTransform.Translation = FVector2D(-175.000000, 0.000000);
	__Local__21->Content = __Local__22;
	__Local__2.Add(__Local__21);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__23->LayoutData.Offsets.Left = 496.000000f;
	__Local__23->LayoutData.Offsets.Top = 200.000000f;
	__Local__23->LayoutData.Offsets.Right = 275.124115f;
	__Local__23->LayoutData.Offsets.Bottom = 45.338673f;
	__Local__23->Parent = __Local__1;
	auto __Local__24 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__24->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"DE2AF1154AA9DBB5BC1F038C324B239F\", \"Effectiveness\")")	);
	__Local__24->Font.Size = 30;
	auto& __Local__25 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__24), UTextLayoutWidget::__PPO__Justification() )));
	__Local__25 = ETextJustify::Type::Center;
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__23->Content = __Local__24;
	__Local__2.Add(__Local__23);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__26->LayoutData.Offsets.Left = 1168.000000f;
	__Local__26->LayoutData.Offsets.Top = 196.000000f;
	__Local__26->LayoutData.Offsets.Right = 275.124115f;
	__Local__26->LayoutData.Offsets.Bottom = 45.338673f;
	__Local__26->Parent = __Local__1;
	auto __Local__27 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__27->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"502F9D6143E12F7C558FFA8FC654864F\", \"Fluency\")")	);
	__Local__27->Font.Size = 30;
	auto& __Local__28 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__27), UTextLayoutWidget::__PPO__Justification() )));
	__Local__28 = ETextJustify::Type::Center;
	__Local__27->Slot = __Local__26;
	__Local__27->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__26->Content = __Local__27;
	__Local__2.Add(__Local__26);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Left = 1164.000000f;
	__Local__29->LayoutData.Offsets.Top = 256.000000f;
	__Local__29->LayoutData.Offsets.Right = 275.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 275.000000f;
	__Local__29->Parent = __Local__1;
	auto __Local__30 = NewObject<UImage>(__Local__0, TEXT("FluencyBaseImage"), (EObjectFlags)0x00280008);
	__Local__30->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultsForSwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__30->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.011550, 1.000000);
	__Local__30->Slot = __Local__29;
	__Local__30->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__29->Content = __Local__30;
	__Local__2.Add(__Local__29);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 488.000000f;
	__Local__32->LayoutData.Offsets.Top = 252.000000f;
	__Local__32->LayoutData.Offsets.Right = 275.000000f;
	__Local__32->LayoutData.Offsets.Bottom = 275.000000f;
	__Local__32->Parent = __Local__1;
	auto __Local__33 = NewObject<UImage>(__Local__0, TEXT("FluencyBaseImage_1"), (EObjectFlags)0x00280008);
	__Local__33->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UResultsForSwitcher_C__pf517162645::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.011550, 1.000000);
	__Local__33->Slot = __Local__32;
	__Local__33->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__32->Content = __Local__33;
	__Local__2.Add(__Local__32);
	auto __Local__35 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__35->LayoutData.Offsets.Left = 560.000000f;
	__Local__35->LayoutData.Offsets.Top = 348.000000f;
	__Local__35->LayoutData.Offsets.Right = 124.405357f;
	__Local__35->LayoutData.Offsets.Bottom = 106.266739f;
	__Local__35->Parent = __Local__1;
	auto __Local__36 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_331"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"BF4AC6CA4BE7DF52B1976EB43202829D\", \"10\")")	);
	__Local__36->Font.OutlineSettings.OutlineSize = 3;
	__Local__36->Font.Size = 60;
	auto& __Local__37 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__36), UTextLayoutWidget::__PPO__Justification() )));
	__Local__37 = ETextJustify::Type::Center;
	__Local__36->Slot = __Local__35;
	__Local__36->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__35->Content = __Local__36;
	__Local__2.Add(__Local__35);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__38->LayoutData.Offsets.Left = 1236.000000f;
	__Local__38->LayoutData.Offsets.Top = 348.000000f;
	__Local__38->LayoutData.Offsets.Right = 124.405357f;
	__Local__38->LayoutData.Offsets.Bottom = 106.266739f;
	__Local__38->Parent = __Local__1;
	auto __Local__39 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__39->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"BCDA6CF241B6000247DA948C7875D8E1\", \"10\")")	);
	__Local__39->Font.OutlineSettings.OutlineSize = 3;
	__Local__39->Font.Size = 60;
	auto& __Local__40 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__39), UTextLayoutWidget::__PPO__Justification() )));
	__Local__40 = ETextJustify::Type::Center;
	__Local__39->Slot = __Local__38;
	__Local__39->RenderTransform.Translation = FVector2D(-175.000000, -50.000000);
	__Local__38->Content = __Local__39;
	__Local__2.Add(__Local__38);
	auto __Local__41 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_42"), (EObjectFlags)0x00280008);
	__Local__41->LayoutData.Offsets.Left = 248.000000f;
	__Local__41->LayoutData.Offsets.Top = 604.000000f;
	__Local__41->LayoutData.Offsets.Right = 335.184204f;
	__Local__41->LayoutData.Offsets.Bottom = 37.330666f;
	__Local__41->Parent = __Local__1;
	auto __Local__42 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"EF7B0DF64031DC8A74FDB1AD0780D752\", \"Audience Eye Contact\")")	);
	auto& __Local__43 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__42), UTextLayoutWidget::__PPO__Justification() )));
	__Local__43 = ETextJustify::Type::Center;
	__Local__42->Slot = __Local__41;
	__Local__42->RenderTransform.Translation = FVector2D(-100.000000, -75.000000);
	__Local__41->Content = __Local__42;
	__Local__2.Add(__Local__41);
	auto __Local__44 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_44"), (EObjectFlags)0x00280008);
	__Local__44->LayoutData.Offsets.Left = 800.000000f;
	__Local__44->LayoutData.Offsets.Top = 604.000000f;
	__Local__44->LayoutData.Offsets.Right = 335.184204f;
	__Local__44->LayoutData.Offsets.Bottom = 37.330666f;
	__Local__44->Parent = __Local__1;
	auto __Local__45 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_7"), (EObjectFlags)0x00280008);
	__Local__45->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"79BB46634833011EB5B54D9990EB2130\", \"Time Spent Stuttering\")")	);
	auto& __Local__46 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__45), UTextLayoutWidget::__PPO__Justification() )));
	__Local__46 = ETextJustify::Type::Center;
	__Local__45->Slot = __Local__44;
	__Local__45->RenderTransform.Translation = FVector2D(-175.000000, -75.000000);
	__Local__44->Content = __Local__45;
	__Local__2.Add(__Local__44);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_48"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Left = 1384.000000f;
	__Local__47->LayoutData.Offsets.Top = 604.000000f;
	__Local__47->LayoutData.Offsets.Right = 425.941620f;
	__Local__47->LayoutData.Offsets.Bottom = 44.004005f;
	__Local__47->Parent = __Local__1;
	auto __Local__48 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_8"), (EObjectFlags)0x00280008);
	__Local__48->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"B5B2DC3A46117153FFE9278EADB291A8\", \"Percent of Speech Stuttering\")")	);
	auto& __Local__49 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__48), UTextLayoutWidget::__PPO__Justification() )));
	__Local__49 = ETextJustify::Type::Center;
	__Local__48->Slot = __Local__47;
	__Local__48->RenderTransform.Translation = FVector2D(-300.000000, -75.000000);
	__Local__47->Content = __Local__48;
	__Local__2.Add(__Local__47);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_43"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Left = 348.000000f;
	__Local__50->LayoutData.Offsets.Top = 684.000000f;
	__Local__50->LayoutData.Offsets.Right = 164.346680f;
	__Local__50->LayoutData.Offsets.Bottom = 88.048050f;
	__Local__50->Parent = __Local__1;
	auto __Local__51 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_49"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"823EAE4B4F5336AE920C4C89B24ED6B6\", \"AEC%\")")	);
	__Local__51->Font.Size = 40;
	auto& __Local__52 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__51), UTextLayoutWidget::__PPO__Justification() )));
	__Local__52 = ETextJustify::Type::Center;
	__Local__51->Slot = __Local__50;
	__Local__51->RenderTransform.Translation = FVector2D(-100.000000, -75.000000);
	__Local__50->Content = __Local__51;
	__Local__2.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Left = 848.000000f;
	__Local__53->LayoutData.Offsets.Top = 680.000000f;
	__Local__53->LayoutData.Offsets.Right = 229.745422f;
	__Local__53->LayoutData.Offsets.Bottom = 88.048050f;
	__Local__53->Parent = __Local__1;
	auto __Local__54 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_9"), (EObjectFlags)0x00280008);
	__Local__54->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"2E8EA5824FECFDA55817E198B54B6CAF\", \"TSS\")")	);
	__Local__54->Font.Size = 40;
	auto& __Local__55 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__54), UTextLayoutWidget::__PPO__Justification() )));
	__Local__55 = ETextJustify::Type::Center;
	__Local__54->Slot = __Local__53;
	__Local__54->RenderTransform.Translation = FVector2D(-175.000000, -75.000000);
	__Local__53->Content = __Local__54;
	__Local__2.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_49"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = 1480.000000f;
	__Local__56->LayoutData.Offsets.Top = 676.000000f;
	__Local__56->LayoutData.Offsets.Right = 229.745422f;
	__Local__56->LayoutData.Offsets.Bottom = 88.048050f;
	__Local__56->Parent = __Local__1;
	auto __Local__57 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_10"), (EObjectFlags)0x00280008);
	__Local__57->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DF7D80E142837437545023836296E74B]\", \"C2E103BA48E940BB8D71A9990766941C\", \"TS%\")")	);
	__Local__57->Font.Size = 40;
	auto& __Local__58 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__57), UTextLayoutWidget::__PPO__Justification() )));
	__Local__58 = ETextJustify::Type::Center;
	__Local__57->Slot = __Local__56;
	__Local__57->RenderTransform.Translation = FVector2D(-300.000000, -75.000000);
	__Local__56->Content = __Local__57;
	__Local__2.Add(__Local__56);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UResultsForSwitcher_C__pf517162645::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__59;
	SlotNames.Append(__Local__59);
}
void UResultsForSwitcher_C__pf517162645::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__60;
	TArray<FDelegateRuntimeBinding>  __Local__61;
	__Local__61.AddUninitialized(10);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__61.GetData(), 10);
	auto& __Local__62 = __Local__61[0];
	__Local__62.ObjectName = FString(TEXT("TextBlock_0"));
	__Local__62.PropertyName = FName(TEXT("Text"));
	auto& __Local__63 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__62.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__63 = TArray<FPropertyPathSegment> ();
	__Local__63.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__63.GetData(), 1);
	auto& __Local__64 = __Local__63[0];
	__Local__64.Name = FName(TEXT("Speech Name"));
	__Local__62.Kind = EBindingKind::Property;
	auto& __Local__65 = __Local__61[1];
	__Local__65.ObjectName = FString(TEXT("TextBlock_331"));
	__Local__65.PropertyName = FName(TEXT("Text"));
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__65.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__66 = TArray<FPropertyPathSegment> ();
	__Local__66.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__66.GetData(), 1);
	auto& __Local__67 = __Local__66[0];
	__Local__67.Name = FName(TEXT("Satisfaction Rating"));
	__Local__65.Kind = EBindingKind::Property;
	auto& __Local__68 = __Local__61[2];
	__Local__68.ObjectName = FString(TEXT("TextBlock_5"));
	__Local__68.PropertyName = FName(TEXT("Text"));
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__68.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__69 = TArray<FPropertyPathSegment> ();
	__Local__69.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__69.GetData(), 1);
	auto& __Local__70 = __Local__69[0];
	__Local__70.Name = FName(TEXT("Fluency Rating"));
	__Local__68.Kind = EBindingKind::Property;
	auto& __Local__71 = __Local__61[3];
	__Local__71.ObjectName = FString(TEXT("TextBlock_9"));
	__Local__71.PropertyName = FName(TEXT("Text"));
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__71.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__72 = TArray<FPropertyPathSegment> ();
	__Local__72.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__72.GetData(), 1);
	auto& __Local__73 = __Local__72[0];
	__Local__73.Name = FName(TEXT("Total TIme stuttering"));
	__Local__71.Kind = EBindingKind::Property;
	auto& __Local__74 = __Local__61[4];
	__Local__74.ObjectName = FString(TEXT("TextBlock_49"));
	__Local__74.PropertyName = FName(TEXT("Text"));
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__74.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__75 = TArray<FPropertyPathSegment> ();
	__Local__75.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__75.GetData(), 1);
	auto& __Local__76 = __Local__75[0];
	__Local__76.Name = FName(TEXT("Audience Looking %"));
	__Local__74.Kind = EBindingKind::Property;
	auto& __Local__77 = __Local__61[5];
	__Local__77.ObjectName = FString(TEXT("TextBlock_10"));
	__Local__77.PropertyName = FName(TEXT("Text"));
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__77.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__78 = TArray<FPropertyPathSegment> ();
	__Local__78.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__78.GetData(), 1);
	auto& __Local__79 = __Local__78[0];
	__Local__79.Name = FName(TEXT("PercentSpeechStuttering"));
	__Local__77.Kind = EBindingKind::Property;
	auto& __Local__80 = __Local__61[6];
	__Local__80.ObjectName = FString(TEXT("FluencyBaseImage"));
	__Local__80.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__80.FunctionName = FName(TEXT("Get_FluencyBaseImage_ColorAndOpacity_0"));
	auto& __Local__81 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__80.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__81 = TArray<FPropertyPathSegment> ();
	__Local__81.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__81.GetData(), 1);
	auto& __Local__82 = __Local__81[0];
	__Local__82.Name = FName(TEXT("Get_FluencyBaseImage_ColorAndOpacity_0"));
	auto& __Local__83 = __Local__61[7];
	__Local__83.ObjectName = FString(TEXT("FluencyBaseImage_1"));
	__Local__83.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__83.FunctionName = FName(TEXT("Get_FluencyBaseImage_1_ColorAndOpacity_0"));
	auto& __Local__84 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__83.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__84 = TArray<FPropertyPathSegment> ();
	__Local__84.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__84.GetData(), 1);
	auto& __Local__85 = __Local__84[0];
	__Local__85.Name = FName(TEXT("Get_FluencyBaseImage_1_ColorAndOpacity_0"));
	auto& __Local__86 = __Local__61[8];
	__Local__86.ObjectName = FString(TEXT("TextBlock_1"));
	__Local__86.PropertyName = FName(TEXT("Text"));
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__86.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__87 = TArray<FPropertyPathSegment> ();
	__Local__87.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__87.GetData(), 1);
	auto& __Local__88 = __Local__87[0];
	__Local__88.Name = FName(TEXT("Attempt #"));
	__Local__86.Kind = EBindingKind::Property;
	auto& __Local__89 = __Local__61[9];
	__Local__89.ObjectName = FString(TEXT("TextBlock_2"));
	__Local__89.PropertyName = FName(TEXT("Text"));
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__89.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__90 = TArray<FPropertyPathSegment> ();
	__Local__90.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__90.GetData(), 1);
	auto& __Local__91 = __Local__90[0];
	__Local__91.Name = FName(TEXT("Total Time Taken"));
	__Local__89.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UResultsForSwitcher_C__pf517162645::StaticClass())->MiscConvertedSubobjects[0]), __Local__60, __Local__61);
}
void UResultsForSwitcher_C__pf517162645::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UResultsForSwitcher_C__pf517162645::bpf__ExecuteUbergraph_ResultsForSwitcher__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf{};
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
				TArray<FAttempt_Struct__pf3774553483>  __Local__92 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__92)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__93 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__93)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__SpeechxName__pfT = b0l__CallFunc_Array_Get_Item__pf.bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf;
			}
		case 4:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__94 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__94)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__95 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__95)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf = UKismetStringLibrary::Conv_IntToString(b0l__CallFunc_Array_Get_Item__pf.bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Attempt ")), bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf);
				bpv__Attemptxx__pfTQ = bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf;
			}
		case 5:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__96 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__96)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__97 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__97)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_FTrunc_ReturnValue_2__pf, 9);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 6:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__98 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__98)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__99 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__99)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Time: ")), bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf);
				bpv__TotalxTimexTaken__pfTT = bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf;
			}
		case 7:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__100 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__100)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__101 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__101)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 9);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 8:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__102 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__102)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__103 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__103)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf);
				bpv__TotalxTImexstuttering__pfTT = bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf;
			}
		case 9:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__104 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__104)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__105 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__105)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(b0l__CallFunc_Array_Get_Item__pf.bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf, FString(TEXT("%")));
				bpv__AudiencexLookingxx__pfTTO = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
			}
		case 10:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__106 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__106)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__107 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__107)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(b0l__CallFunc_Array_Get_Item__pf.bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf);
				bpv__SatisfactionxRating__pfT = bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf;
			}
		case 11:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__108 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__108)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__109 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__109)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(b0l__CallFunc_Array_Get_Item__pf.bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf);
				bpv__FluencyxRating__pfT = bpfv__CallFunc_Conv_IntToString_ReturnValue__pf;
			}
		case 12:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__110 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__110)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__111 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__111)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(100, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf, FString(TEXT("%")));
				bpv__PercentSpeechStuttering__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpv__FluencyxRating__pfT);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 8);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 14:
			{
				if(::IsValid(bpv__FluencyBaseImage__pf))
				{
					bpv__FluencyBaseImage__pf->UWidget::SetRenderOpacity(0.000000);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__FluencyStar__pf))
				{
					bpv__FluencyStar__pf->UWidget::SetRenderOpacity(1.000000);
				}
			}
		case 16:
			{
				bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf = UKismetStringLibrary::Conv_StringToInt(bpv__SatisfactionxRating__pfT);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf, 8);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__FluencyBaseImage_1__pf))
				{
					bpv__FluencyBaseImage_1__pf->UWidget::SetRenderOpacity(0.000000);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__EffectivenessStar__pf))
				{
					bpv__EffectivenessStar__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__112 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__112)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__113 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__113)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Time: ")), bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf, FString(TEXT("0")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf);
				bpv__TotalxTimexTaken__pfTT = bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf;
				__CurrentState = 7;
				break;
			}
		case 20:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__114 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__114)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__115 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__115)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_Array_Get_Item__pf.bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf, FString(TEXT("0")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf);
				bpv__TotalxTImexstuttering__pfTT = bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf;
				__CurrentState = 9;
				break;
			}
		case 21:
			{
				if(::IsValid(bpv__FluencyBaseImage__pf))
				{
					bpv__FluencyBaseImage__pf->UWidget::SetRenderOpacity(1.000000);
				}
			}
		case 22:
			{
				if(::IsValid(bpv__FluencyStar__pf))
				{
					bpv__FluencyStar__pf->UWidget::SetRenderOpacity(0.000000);
				}
				__CurrentState = 16;
				break;
			}
		case 23:
			{
				if(::IsValid(bpv__FluencyBaseImage_1__pf))
				{
					bpv__FluencyBaseImage_1__pf->UWidget::SetRenderOpacity(1.000000);
				}
			}
		case 24:
			{
				if(::IsValid(bpv__EffectivenessStar__pf))
				{
					bpv__EffectivenessStar__pf->UWidget::SetRenderOpacity(0.000000);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UResultsForSwitcher_C__pf517162645::bpf__ResultsInitBySwitcher__pf()
{
	bpf__ExecuteUbergraph_ResultsForSwitcher__pf_0(1);
}
FLinearColor  UResultsForSwitcher_C__pf517162645::bpf__Get_FluencyBaseImage_ColorAndOpacity_0__pf()
{
	FLinearColor bpp__ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_LinearColor_Red_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpv__FluencyxRating__pfT);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 3);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 2);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_LinearColor_Red_ReturnValue__pf = UKismetMathLibrary::LinearColor_Red();
				bpp__ReturnValue__pf = bpfv__CallFunc_LinearColor_Red_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf = UKismetMathLibrary::LinearColor_Yellow();
				bpp__ReturnValue__pf = bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FLinearColor  UResultsForSwitcher_C__pf517162645::bpf__Get_FluencyBaseImage_1_ColorAndOpacity_0__pf()
{
	FLinearColor bpp__ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	FLinearColor bpfv__CallFunc_LinearColor_Red_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpv__SatisfactionxRating__pfT);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 3);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 2);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf, 1);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_LinearColor_Red_ReturnValue__pf = UKismetMathLibrary::LinearColor_Red();
				bpp__ReturnValue__pf = bpfv__CallFunc_LinearColor_Red_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf = UKismetMathLibrary::LinearColor_Yellow();
				bpp__ReturnValue__pf = bpfv__CallFunc_LinearColor_Yellow_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UResultsForSwitcher_C__pf517162645::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UResultsForSwitcher_C__pf517162645::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AsyncActionHandleSaveGame 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAsyncHandleSaveGame__DelegateSignature 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundOne_Cue.MenuSoundOne_Cue 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Stutter_Speak_Content/Audio_Files/Cues/MenuSoundTwo_Cue.MenuSoundTwo_Cue 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Holder.Projector_Screen_Holder 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Main.Projector_Screen_Main 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/Credits2_0.Credits2_0 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/ProjectorScreen.ProjectorScreen 
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
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Stutter_Speak_Content/Pre-Fabs/ModelParts/Projector_Screen/projScreen_Plane.projScreen_Plane 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Stutter_Speak_Content/Materials/ProjectorMaterials/Screen/Projector_Screen_Secondary.Projector_Screen_Secondary 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
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
		{0, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UResultsForSwitcher_C__pf517162645
{
	FRegisterHelper__UResultsForSwitcher_C__pf517162645()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/ResultsForSwitcher"), &UResultsForSwitcher_C__pf517162645::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UResultsForSwitcher_C__pf517162645 Instance;
};
FRegisterHelper__UResultsForSwitcher_C__pf517162645 FRegisterHelper__UResultsForSwitcher_C__pf517162645::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
