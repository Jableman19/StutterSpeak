#include "NativizedAssets.h"
#include "Total_Time_Graph__pf517162645.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UTotal_Time_Graph_C__pf517162645::UTotal_Time_Graph_C__pf517162645(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Image_165__pf = nullptr;
	bpv__Line1__pf = nullptr;
	bpv__Line2__pf = nullptr;
	bpv__Line3__pf = nullptr;
	bpv__Line4__pf = nullptr;
	bpv__NumberLabel1__pf = nullptr;
	bpv__NumberLabel2__pf = nullptr;
	bpv__NumberLabel3__pf = nullptr;
	bpv__NumberLabel4__pf = nullptr;
	bpv__NumberLabel5__pf = nullptr;
	bpv__TextBlock_4__pf = nullptr;
	bpv__Xx1__pfG = nullptr;
	bpv__Xx1Dot__pfG = nullptr;
	bpv__Xx2__pfG = nullptr;
	bpv__Xx2Dot__pfG = nullptr;
	bpv__Xx3__pfG = nullptr;
	bpv__Xx3Dot__pfG = nullptr;
	bpv__Xx4__pfG = nullptr;
	bpv__Xx4Dot__pfG = nullptr;
	bpv__Xx5__pfG = nullptr;
	bpv__Xx5Dot__pfG = nullptr;
	bpv__Xxaxis__pfG = nullptr;
	bpv__XxaxisTitle__pfG = nullptr;
	bpv__Yx1__pfG = nullptr;
	bpv__Yx3__pfG = nullptr;
	bpv__Yx5__pfG = nullptr;
	bpv__Yxaxis__pfG = nullptr;
	bpv__YxaxisTitle__pfG = nullptr;
	bpv__XxSpotx1__pfGT = FString(TEXT(""));
	bpv__XxSpotx2__pfGT = FString(TEXT(""));
	bpv__XxSpotx3__pfGT = FString(TEXT(""));
	bpv__XxSpotx4__pfGT = FString(TEXT(""));
	bpv__XxSpotx5__pfGT = FString(TEXT(""));
	bpv__XxaxisxTitle__pfGT = FString(TEXT("Attempt Number"));
	bpv__YxaxisxTitle__pfGT = FString(TEXT(""));
	bpv__LastxIndexxAttemptxx__pfTTTQ = 0;
	bpv__LackxofxDataxWarning__pfTTT = FString(TEXT(""));
	bpv__NumberxofxGraphingxPoints__pfTTT = 0;
	bpv__TempxLoopxCounter__pfTT = 0;
	bpv__DataxBeingxUsed__pfTT = TArray<float> ();
	bpv__YxSpotx1__pfGT = FString(TEXT(""));
	bpv__YxSpotx3__pfGT = FString(TEXT(""));
	bpv__YxSpotx5__pfGT = FString(TEXT(""));
	bpv__LinexReset__pfT = false;
	bpv__MaxxTimexxSecondsxxPublicx__pfTTLKLK = 0.000000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTotal_Time_Graph_C__pf517162645::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UTotal_Time_Graph_C__pf517162645::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__2.Reserve(28);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Left = 240.000000f;
	__Local__3->LayoutData.Offsets.Top = 620.000000f;
	__Local__3->LayoutData.Offsets.Right = 1260.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 10.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UImage>(__Local__0, TEXT("X-axis"), (EObjectFlags)0x00280008);
	__Local__4->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__4->Slot = __Local__3;
	__Local__4->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__5->LayoutData.Offsets.Left = 240.000000f;
	__Local__5->LayoutData.Offsets.Top = 65.000000f;
	__Local__5->LayoutData.Offsets.Right = 10.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 555.000000f;
	__Local__5->Parent = __Local__1;
	auto __Local__6 = NewObject<UImage>(__Local__0, TEXT("Y-axis"), (EObjectFlags)0x00280008);
	__Local__6->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__6->Slot = __Local__5;
	__Local__6->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__5->Content = __Local__6;
	__Local__2.Add(__Local__5);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = 285.000000f;
	__Local__7->LayoutData.Offsets.Top = 640.000000f;
	__Local__7->LayoutData.Offsets.Right = 20.000000f;
	__Local__7->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__7->Parent = __Local__1;
	auto __Local__8 = NewObject<UTextBlock>(__Local__0, TEXT("X-1"), (EObjectFlags)0x00280008);
	__Local__8->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"BE0E187045E72232F3050A8CEFAD9A51\", \"1\")")	);
	auto& __Local__9 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__8), UTextLayoutWidget::__PPO__Justification() )));
	__Local__9 = ETextJustify::Type::Center;
	__Local__8->Slot = __Local__7;
	__Local__8->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__7->Content = __Local__8;
	__Local__2.Add(__Local__7);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 585.000000f;
	__Local__10->LayoutData.Offsets.Top = 640.000000f;
	__Local__10->LayoutData.Offsets.Right = 20.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, TEXT("X-2"), (EObjectFlags)0x00280008);
	__Local__11->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"8066AB9549593E33ADD72C8AE488B154\", \"2\")")	);
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__11), UTextLayoutWidget::__PPO__Justification() )));
	__Local__12 = ETextJustify::Type::Center;
	__Local__11->Slot = __Local__10;
	__Local__11->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__10->Content = __Local__11;
	__Local__2.Add(__Local__10);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = 885.000000f;
	__Local__13->LayoutData.Offsets.Top = 640.000000f;
	__Local__13->LayoutData.Offsets.Right = 20.000000f;
	__Local__13->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__13->Parent = __Local__1;
	auto __Local__14 = NewObject<UTextBlock>(__Local__0, TEXT("X-3"), (EObjectFlags)0x00280008);
	__Local__14->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"30D1182D4F2D571672AA12875F25B659\", \"3\")")	);
	auto& __Local__15 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__14), UTextLayoutWidget::__PPO__Justification() )));
	__Local__15 = ETextJustify::Type::Center;
	__Local__14->Slot = __Local__13;
	__Local__14->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__13->Content = __Local__14;
	__Local__2.Add(__Local__13);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__16->LayoutData.Offsets.Left = 1185.000000f;
	__Local__16->LayoutData.Offsets.Top = 640.000000f;
	__Local__16->LayoutData.Offsets.Right = 20.000000f;
	__Local__16->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__16->Parent = __Local__1;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, TEXT("X-4"), (EObjectFlags)0x00280008);
	__Local__17->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"880CF32A4897D4DBAD6326AEDCF6F20F\", \"4\")")	);
	auto& __Local__18 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__17), UTextLayoutWidget::__PPO__Justification() )));
	__Local__18 = ETextJustify::Type::Center;
	__Local__17->Slot = __Local__16;
	__Local__17->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__16->Content = __Local__17;
	__Local__2.Add(__Local__16);
	auto __Local__19 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__19->LayoutData.Offsets.Right = 1625.970459f;
	__Local__19->LayoutData.Offsets.Bottom = 779.638550f;
	__Local__19->ZOrder = -1;
	__Local__19->Parent = __Local__1;
	auto __Local__20 = NewObject<UImage>(__Local__0, TEXT("Image_165"), (EObjectFlags)0x00280008);
	__Local__20->ColorAndOpacity = FLinearColor(0.062500, 0.062500, 0.062500, 1.000000);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__2.Add(__Local__19);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = 1485.000000f;
	__Local__21->LayoutData.Offsets.Top = 640.000000f;
	__Local__21->LayoutData.Offsets.Right = 20.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__21->Parent = __Local__1;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, TEXT("X-5"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"72B41EA645FB4B1DB8147F8547D8ADC6\", \"5\")")	);
	auto& __Local__23 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__22), UTextLayoutWidget::__PPO__Justification() )));
	__Local__23 = ETextJustify::Type::Center;
	__Local__22->Slot = __Local__21;
	__Local__22->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__21->Content = __Local__22;
	__Local__2.Add(__Local__21);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__24->LayoutData.Offsets.Left = 765.000000f;
	__Local__24->LayoutData.Offsets.Top = 700.000000f;
	__Local__24->LayoutData.Offsets.Right = 250.000000f;
	__Local__24->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__24->Parent = __Local__1;
	auto __Local__25 = NewObject<UTextBlock>(__Local__0, TEXT("X-axisTitle"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"3FD4FECB4F756286A6D64D88609B5B04\", \"[X-axis Title]\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__25), UTextLayoutWidget::__PPO__Justification() )));
	__Local__26 = ETextJustify::Type::Center;
	__Local__25->Slot = __Local__24;
	__Local__25->RenderTransform.Translation = FVector2D(50.000000, 0.000000);
	__Local__24->Content = __Local__25;
	__Local__2.Add(__Local__24);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = 10.000000f;
	__Local__27->LayoutData.Offsets.Top = 310.000000f;
	__Local__27->LayoutData.Offsets.Right = 163.520676f;
	__Local__27->LayoutData.Offsets.Bottom = 80.000000f;
	__Local__27->Parent = __Local__1;
	auto __Local__28 = NewObject<UTextBlock>(__Local__0, TEXT("Y-axisTitle"), (EObjectFlags)0x00280008);
	__Local__28->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"F7B6CBB04066131899401BAA71BF8CFA\", \"Total Time Suttering\")")	);
	auto& __Local__29 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__28), UTextLayoutWidget::__PPO__Justification() )));
	__Local__29 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__31{};
	const FProperty* __Local__30 = __Local__31.Get();
	if (nullptr == __Local__30)
	{
		__Local__30 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__30);
		__Local__31 = __Local__30;
	}
	(((FBoolProperty*)__Local__30)->SetPropertyValue_InContainer((__Local__28), true, 0));
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__2.Add(__Local__27);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 600.000000f;
	__Local__32->LayoutData.Offsets.Top = 250.000000f;
	__Local__32->LayoutData.Offsets.Right = 700.000000f;
	__Local__32->LayoutData.Offsets.Bottom = 80.000000f;
	__Local__32->Parent = __Local__1;
	auto __Local__33 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__33->Font.Size = 30;
	auto& __Local__34 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__33), UTextLayoutWidget::__PPO__Justification() )));
	__Local__34 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__30)->SetPropertyValue_InContainer((__Local__33), true, 0));
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__2.Add(__Local__32);
	auto __Local__35 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__35->LayoutData.Offsets.Left = 200.000000f;
	__Local__35->LayoutData.Offsets.Top = 65.000000f;
	__Local__35->LayoutData.Offsets.Right = 80.000000f;
	__Local__35->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__35->Parent = __Local__1;
	auto __Local__36 = NewObject<UTextBlock>(__Local__0, TEXT("Y-5"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"ABE50AEB482FAB5EEE7D3EA20316EF2C\", \"00:00\")")	);
	__Local__36->Slot = __Local__35;
	__Local__36->bIsVariable = true;
	__Local__35->Content = __Local__36;
	__Local__2.Add(__Local__35);
	auto __Local__37 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__37->LayoutData.Offsets.Left = 200.000000f;
	__Local__37->LayoutData.Offsets.Top = 332.500000f;
	__Local__37->LayoutData.Offsets.Right = 80.000000f;
	__Local__37->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__37->Parent = __Local__1;
	auto __Local__38 = NewObject<UTextBlock>(__Local__0, TEXT("Y-3"), (EObjectFlags)0x00280008);
	__Local__38->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"632C968D49ADA8B6AA3DAEBCB1C88FBF\", \"00:00\")")	);
	__Local__38->Slot = __Local__37;
	__Local__38->bIsVariable = true;
	__Local__37->Content = __Local__38;
	__Local__2.Add(__Local__37);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Left = 200.000000f;
	__Local__39->LayoutData.Offsets.Top = 600.000000f;
	__Local__39->LayoutData.Offsets.Right = 80.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__39->Parent = __Local__1;
	auto __Local__40 = NewObject<UTextBlock>(__Local__0, TEXT("Y-1"), (EObjectFlags)0x00280008);
	__Local__40->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"F0C9BB674785D8275B635382145F2A85\", \"00:00\")")	);
	__Local__40->Slot = __Local__39;
	__Local__40->bIsVariable = true;
	__Local__39->Content = __Local__40;
	__Local__2.Add(__Local__39);
	auto __Local__41 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_25"), (EObjectFlags)0x00280008);
	__Local__41->LayoutData.Offsets.Left = 320.000000f;
	__Local__41->LayoutData.Offsets.Top = 642.000000f;
	__Local__41->LayoutData.Offsets.Right = 30.000000f;
	__Local__41->Parent = __Local__1;
	auto __Local__42 = NewObject<UImage>(__Local__0, TEXT("X-1Dot"), (EObjectFlags)0x00280008);
	__Local__42->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__42->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__42->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__2.Add(__Local__41);
	auto __Local__44 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_26"), (EObjectFlags)0x00280008);
	__Local__44->LayoutData.Offsets.Left = 620.000000f;
	__Local__44->LayoutData.Offsets.Top = 642.000000f;
	__Local__44->LayoutData.Offsets.Right = 30.000000f;
	__Local__44->Parent = __Local__1;
	auto __Local__45 = NewObject<UImage>(__Local__0, TEXT("X-2Dot"), (EObjectFlags)0x00280008);
	__Local__45->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__45->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__45->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__2.Add(__Local__44);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_27"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Left = 920.000000f;
	__Local__47->LayoutData.Offsets.Top = 642.000000f;
	__Local__47->LayoutData.Offsets.Right = 30.000000f;
	__Local__47->Parent = __Local__1;
	auto __Local__48 = NewObject<UImage>(__Local__0, TEXT("X-3Dot"), (EObjectFlags)0x00280008);
	__Local__48->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__48->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__2.Add(__Local__47);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_28"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Left = 1220.000000f;
	__Local__50->LayoutData.Offsets.Top = 642.000000f;
	__Local__50->LayoutData.Offsets.Right = 30.000000f;
	__Local__50->Parent = __Local__1;
	auto __Local__51 = NewObject<UImage>(__Local__0, TEXT("X-4Dot"), (EObjectFlags)0x00280008);
	__Local__51->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__51->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__51->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__2.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_29"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Left = 1520.000000f;
	__Local__53->LayoutData.Offsets.Top = 642.000000f;
	__Local__53->LayoutData.Offsets.Right = 30.000000f;
	__Local__53->Parent = __Local__1;
	auto __Local__54 = NewObject<UImage>(__Local__0, TEXT("X-5Dot"), (EObjectFlags)0x00280008);
	__Local__54->Brush.ImageSize = FVector2D(1890.000000, 1890.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__55 = CastChecked<UObject>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__54->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__2.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = 385.000000f;
	__Local__56->LayoutData.Offsets.Top = 656.000000f;
	__Local__56->LayoutData.Offsets.Right = 200.000000f;
	__Local__56->LayoutData.Offsets.Bottom = 5.000000f;
	__Local__56->Parent = __Local__1;
	auto __Local__57 = NewObject<UImage>(__Local__0, TEXT("Line1"), (EObjectFlags)0x00280008);
	__Local__57->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__2.Add(__Local__56);
	auto __Local__58 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_33"), (EObjectFlags)0x00280008);
	__Local__58->LayoutData.Offsets.Left = 685.000000f;
	__Local__58->LayoutData.Offsets.Top = 660.000000f;
	__Local__58->LayoutData.Offsets.Right = 200.000000f;
	__Local__58->LayoutData.Offsets.Bottom = 5.000000f;
	__Local__58->Parent = __Local__1;
	auto __Local__59 = NewObject<UImage>(__Local__0, TEXT("Line2"), (EObjectFlags)0x00280008);
	__Local__59->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__2.Add(__Local__58);
	auto __Local__60 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_36"), (EObjectFlags)0x00280008);
	__Local__60->LayoutData.Offsets.Left = 995.000000f;
	__Local__60->LayoutData.Offsets.Top = 660.000000f;
	__Local__60->LayoutData.Offsets.Right = 200.000000f;
	__Local__60->LayoutData.Offsets.Bottom = 5.000000f;
	__Local__60->Parent = __Local__1;
	auto __Local__61 = NewObject<UImage>(__Local__0, TEXT("Line3"), (EObjectFlags)0x00280008);
	__Local__61->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__2.Add(__Local__60);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_37"), (EObjectFlags)0x00280008);
	__Local__62->LayoutData.Offsets.Left = 1290.000000f;
	__Local__62->LayoutData.Offsets.Top = 660.000000f;
	__Local__62->LayoutData.Offsets.Right = 200.000000f;
	__Local__62->LayoutData.Offsets.Bottom = 5.000000f;
	__Local__62->Parent = __Local__1;
	auto __Local__63 = NewObject<UImage>(__Local__0, TEXT("Line4"), (EObjectFlags)0x00280008);
	__Local__63->ColorAndOpacity = FLinearColor(0.035874, 1.000000, 0.000000, 1.000000);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__2.Add(__Local__62);
	auto __Local__64 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__64->LayoutData.Offsets.Left = 325.000000f;
	__Local__64->LayoutData.Offsets.Top = 640.000000f;
	__Local__64->LayoutData.Offsets.Right = 20.000000f;
	__Local__64->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__64->Parent = __Local__1;
	auto __Local__65 = NewObject<UTextBlock>(__Local__0, TEXT("NumberLabel1"), (EObjectFlags)0x00280008);
	__Local__65->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"B04210B449FFB454519FD3BF651D84CB\", \"8\")")	);
	auto& __Local__66 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__65), UTextLayoutWidget::__PPO__Justification() )));
	__Local__66 = ETextJustify::Type::Center;
	__Local__65->Slot = __Local__64;
	__Local__65->bIsVariable = true;
	__Local__64->Content = __Local__65;
	__Local__2.Add(__Local__64);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__67->LayoutData.Offsets.Left = 625.000000f;
	__Local__67->LayoutData.Offsets.Top = 640.000000f;
	__Local__67->LayoutData.Offsets.Right = 20.000000f;
	__Local__67->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__67->Parent = __Local__1;
	auto __Local__68 = NewObject<UTextBlock>(__Local__0, TEXT("NumberLabel2"), (EObjectFlags)0x00280008);
	__Local__68->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"B1ABD40A466CDDF770DA0A99F762F4D5\", \"10\")")	);
	auto& __Local__69 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__68), UTextLayoutWidget::__PPO__Justification() )));
	__Local__69 = ETextJustify::Type::Center;
	__Local__68->Slot = __Local__67;
	__Local__68->bIsVariable = true;
	__Local__67->Content = __Local__68;
	__Local__2.Add(__Local__67);
	auto __Local__70 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_17"), (EObjectFlags)0x00280008);
	__Local__70->LayoutData.Offsets.Left = 925.000000f;
	__Local__70->LayoutData.Offsets.Top = 640.000000f;
	__Local__70->LayoutData.Offsets.Right = 20.000000f;
	__Local__70->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__70->Parent = __Local__1;
	auto __Local__71 = NewObject<UTextBlock>(__Local__0, TEXT("NumberLabel3"), (EObjectFlags)0x00280008);
	__Local__71->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"67D5C4A04AFE7D4A17E2FAB9CDF92A1A\", \"10\")")	);
	auto& __Local__72 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__71), UTextLayoutWidget::__PPO__Justification() )));
	__Local__72 = ETextJustify::Type::Center;
	__Local__71->Slot = __Local__70;
	__Local__71->bIsVariable = true;
	__Local__70->Content = __Local__71;
	__Local__2.Add(__Local__70);
	auto __Local__73 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__73->LayoutData.Offsets.Left = 1225.000000f;
	__Local__73->LayoutData.Offsets.Top = 640.000000f;
	__Local__73->LayoutData.Offsets.Right = 20.000000f;
	__Local__73->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__73->Parent = __Local__1;
	auto __Local__74 = NewObject<UTextBlock>(__Local__0, TEXT("NumberLabel4"), (EObjectFlags)0x00280008);
	__Local__74->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"CCADF4C24AAACCCEC349AEA466BE398D\", \"10\")")	);
	auto& __Local__75 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__74), UTextLayoutWidget::__PPO__Justification() )));
	__Local__75 = ETextJustify::Type::Center;
	__Local__74->Slot = __Local__73;
	__Local__74->bIsVariable = true;
	__Local__73->Content = __Local__74;
	__Local__2.Add(__Local__73);
	auto __Local__76 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__76->LayoutData.Offsets.Left = 1525.000000f;
	__Local__76->LayoutData.Offsets.Top = 640.000000f;
	__Local__76->LayoutData.Offsets.Right = 20.000000f;
	__Local__76->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__76->Parent = __Local__1;
	auto __Local__77 = NewObject<UTextBlock>(__Local__0, TEXT("NumberLabel5"), (EObjectFlags)0x00280008);
	__Local__77->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FB05E83F4E51C6063626A9B35810665C]\", \"14307ED44AFD3C9A693E2DBB9B68DE85\", \"10\")")	);
	auto& __Local__78 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__77), UTextLayoutWidget::__PPO__Justification() )));
	__Local__78 = ETextJustify::Type::Center;
	__Local__77->Slot = __Local__76;
	__Local__77->bIsVariable = true;
	__Local__76->Content = __Local__77;
	__Local__2.Add(__Local__76);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UTotal_Time_Graph_C__pf517162645::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__79;
	SlotNames.Append(__Local__79);
}
void UTotal_Time_Graph_C__pf517162645::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__80;
	TArray<FDelegateRuntimeBinding>  __Local__81;
	__Local__81.AddUninitialized(11);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__81.GetData(), 11);
	auto& __Local__82 = __Local__81[0];
	__Local__82.ObjectName = FString(TEXT("X-axisTitle"));
	__Local__82.PropertyName = FName(TEXT("Text"));
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__82.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__83 = TArray<FPropertyPathSegment> ();
	__Local__83.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__83.GetData(), 1);
	auto& __Local__84 = __Local__83[0];
	__Local__84.Name = FName(TEXT("X-axis Title"));
	__Local__82.Kind = EBindingKind::Property;
	auto& __Local__85 = __Local__81[1];
	__Local__85.ObjectName = FString(TEXT("TextBlock_4"));
	__Local__85.PropertyName = FName(TEXT("Text"));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__85.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__86 = TArray<FPropertyPathSegment> ();
	__Local__86.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__86.GetData(), 1);
	auto& __Local__87 = __Local__86[0];
	__Local__87.Name = FName(TEXT("Lack of Data Warning"));
	__Local__85.Kind = EBindingKind::Property;
	auto& __Local__88 = __Local__81[2];
	__Local__88.ObjectName = FString(TEXT("X-1"));
	__Local__88.PropertyName = FName(TEXT("Text"));
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__88.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__89 = TArray<FPropertyPathSegment> ();
	__Local__89.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__89.GetData(), 1);
	auto& __Local__90 = __Local__89[0];
	__Local__90.Name = FName(TEXT("X-Spot 1"));
	__Local__88.Kind = EBindingKind::Property;
	auto& __Local__91 = __Local__81[3];
	__Local__91.ObjectName = FString(TEXT("X-2"));
	__Local__91.PropertyName = FName(TEXT("Text"));
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__91.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__92 = TArray<FPropertyPathSegment> ();
	__Local__92.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__92.GetData(), 1);
	auto& __Local__93 = __Local__92[0];
	__Local__93.Name = FName(TEXT("X-Spot 2"));
	__Local__91.Kind = EBindingKind::Property;
	auto& __Local__94 = __Local__81[4];
	__Local__94.ObjectName = FString(TEXT("X-3"));
	__Local__94.PropertyName = FName(TEXT("Text"));
	auto& __Local__95 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__94.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__95 = TArray<FPropertyPathSegment> ();
	__Local__95.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__95.GetData(), 1);
	auto& __Local__96 = __Local__95[0];
	__Local__96.Name = FName(TEXT("X-Spot 3"));
	__Local__94.Kind = EBindingKind::Property;
	auto& __Local__97 = __Local__81[5];
	__Local__97.ObjectName = FString(TEXT("X-4"));
	__Local__97.PropertyName = FName(TEXT("Text"));
	auto& __Local__98 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__97.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__98 = TArray<FPropertyPathSegment> ();
	__Local__98.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__98.GetData(), 1);
	auto& __Local__99 = __Local__98[0];
	__Local__99.Name = FName(TEXT("X-Spot 4"));
	__Local__97.Kind = EBindingKind::Property;
	auto& __Local__100 = __Local__81[6];
	__Local__100.ObjectName = FString(TEXT("X-5"));
	__Local__100.PropertyName = FName(TEXT("Text"));
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__100.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__101 = TArray<FPropertyPathSegment> ();
	__Local__101.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__101.GetData(), 1);
	auto& __Local__102 = __Local__101[0];
	__Local__102.Name = FName(TEXT("X-Spot 5"));
	__Local__100.Kind = EBindingKind::Property;
	auto& __Local__103 = __Local__81[7];
	__Local__103.ObjectName = FString(TEXT("Y-1"));
	__Local__103.PropertyName = FName(TEXT("Text"));
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__103.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__104 = TArray<FPropertyPathSegment> ();
	__Local__104.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__104.GetData(), 1);
	auto& __Local__105 = __Local__104[0];
	__Local__105.Name = FName(TEXT("Y-Spot 1"));
	__Local__103.Kind = EBindingKind::Property;
	auto& __Local__106 = __Local__81[8];
	__Local__106.ObjectName = FString(TEXT("Y-3"));
	__Local__106.PropertyName = FName(TEXT("Text"));
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__106.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__107 = TArray<FPropertyPathSegment> ();
	__Local__107.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__107.GetData(), 1);
	auto& __Local__108 = __Local__107[0];
	__Local__108.Name = FName(TEXT("Y-Spot 3"));
	__Local__106.Kind = EBindingKind::Property;
	auto& __Local__109 = __Local__81[9];
	__Local__109.ObjectName = FString(TEXT("Y-5"));
	__Local__109.PropertyName = FName(TEXT("Text"));
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__109.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__110 = TArray<FPropertyPathSegment> ();
	__Local__110.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__110.GetData(), 1);
	auto& __Local__111 = __Local__110[0];
	__Local__111.Name = FName(TEXT("Y-Spot 5"));
	__Local__109.Kind = EBindingKind::Property;
	auto& __Local__112 = __Local__81[10];
	__Local__112.ObjectName = FString(TEXT("Y-axisTitle"));
	__Local__112.PropertyName = FName(TEXT("Text"));
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__112.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__113 = TArray<FPropertyPathSegment> ();
	__Local__113.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__113.GetData(), 1);
	auto& __Local__114 = __Local__113[0];
	__Local__114.Name = FName(TEXT("Y-axis Title"));
	__Local__112.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UTotal_Time_Graph_C__pf517162645::StaticClass())->MiscConvertedSubobjects[0]), __Local__80, __Local__81);
}
void UTotal_Time_Graph_C__pf517162645::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UTotal_Time_Graph_C__pf517162645::bpf__ExecuteUbergraph_Total_Time_Graph__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_10__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_11__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_12__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_13__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__SetxYxaxis__pfTG();
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ b0l__CallFunc_Array_Get_Item_14__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx1Dot__pfG, 1, b0l__CallFunc_Array_Get_Item_14__pf, bpv__NumberLabel1__pf, false);
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 1, /*out*/ b0l__CallFunc_Array_Get_Item_10__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx2Dot__pfG, 2, b0l__CallFunc_Array_Get_Item_10__pf, bpv__NumberLabel2__pf, false);
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 2, /*out*/ b0l__CallFunc_Array_Get_Item_11__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx3Dot__pfG, 3, b0l__CallFunc_Array_Get_Item_11__pf, bpv__NumberLabel3__pf, false);
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 3, /*out*/ b0l__CallFunc_Array_Get_Item_12__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx4Dot__pfG, 4, b0l__CallFunc_Array_Get_Item_12__pf, bpv__NumberLabel4__pf, false);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 4, /*out*/ b0l__CallFunc_Array_Get_Item_13__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx5Dot__pfG, 5, b0l__CallFunc_Array_Get_Item_13__pf, bpv__NumberLabel5__pf, false);
			}
		case 7:
			{
				bpf__PlacexLine__pfT(bpv__Xx1Dot__pfG, bpv__Xx2Dot__pfG, /*out*/ bpv__Line1__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 8:
			{
				bpf__PlacexLine__pfT(bpv__Xx2Dot__pfG, bpv__Xx3Dot__pfG, /*out*/ bpv__Line2__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 9:
			{
				bpf__PlacexLine__pfT(bpv__Xx3Dot__pfG, bpv__Xx4Dot__pfG, /*out*/ bpv__Line3__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 10:
			{
				bpf__PlacexLine__pfT(bpv__Xx4Dot__pfG, bpv__Xx5Dot__pfG, /*out*/ bpv__Line4__pf, /*out*/ bpv__LinexReset__pfT);
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 1);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpv__XxSpotx1__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue__pf;
			}
		case 12:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf = UKismetStringLibrary::Conv_IntToString(bpv__LastxIndexxAttemptxx__pfTTTQ);
				bpv__XxSpotx5__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf;
			}
		case 13:
			{
				bpf__GetxData__pfT();
			}
		case 14:
			{
				bpf__SetxYxaxis__pfTG();
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx1Dot__pfG, 1, b0l__CallFunc_Array_Get_Item__pf, bpv__NumberLabel1__pf, false);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 1, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx5Dot__pfG, 5, b0l__CallFunc_Array_Get_Item_1__pf, bpv__NumberLabel5__pf, false);
			}
		case 17:
			{
				bpf__PlacexLine__pfT(bpv__Xx1Dot__pfG, bpv__Xx5Dot__pfG, /*out*/ bpv__Line1__pf, /*out*/ bpv__LinexReset__pfT);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 2);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				bpv__XxSpotx1__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf;
			}
		case 19:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 1);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf);
				bpv__XxSpotx3__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf;
			}
		case 20:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpv__LastxIndexxAttemptxx__pfTTTQ);
				bpv__XxSpotx5__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf;
			}
		case 21:
			{
				bpf__GetxData__pfT();
			}
		case 22:
			{
				bpf__SetxYxaxis__pfTG();
			}
		case 23:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx1Dot__pfG, 1, b0l__CallFunc_Array_Get_Item_3__pf, bpv__NumberLabel1__pf, false);
			}
		case 24:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 1, /*out*/ b0l__CallFunc_Array_Get_Item_8__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx3Dot__pfG, 3, b0l__CallFunc_Array_Get_Item_8__pf, bpv__NumberLabel3__pf, false);
			}
		case 25:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 2, /*out*/ b0l__CallFunc_Array_Get_Item_9__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx5Dot__pfG, 5, b0l__CallFunc_Array_Get_Item_9__pf, bpv__NumberLabel5__pf, false);
			}
		case 26:
			{
				bpf__PlacexLine__pfT(bpv__Xx1Dot__pfG, bpv__Xx3Dot__pfG, /*out*/ bpv__Line1__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 27:
			{
				bpf__PlacexLine__pfT(bpv__Xx3Dot__pfG, bpv__Xx5Dot__pfG, /*out*/ bpv__Line2__pf, /*out*/ bpv__LinexReset__pfT);
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 3);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf);
				bpv__XxSpotx1__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf;
			}
		case 29:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 2);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf);
				bpv__XxSpotx2__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf;
			}
		case 30:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 1);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf);
				bpv__XxSpotx3__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_8__pf;
			}
		case 31:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf = UKismetStringLibrary::Conv_IntToString(bpv__LastxIndexxAttemptxx__pfTTTQ);
				bpv__XxSpotx4__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf;
			}
		case 32:
			{
				bpf__GetxData__pfT();
			}
		case 33:
			{
				bpf__SetxYxaxis__pfTG();
			}
		case 34:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx1Dot__pfG, 1, b0l__CallFunc_Array_Get_Item_4__pf, bpv__NumberLabel1__pf, false);
			}
		case 35:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 1, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx2Dot__pfG, 2, b0l__CallFunc_Array_Get_Item_5__pf, bpv__NumberLabel2__pf, false);
			}
		case 36:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 2, /*out*/ b0l__CallFunc_Array_Get_Item_6__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx3Dot__pfG, 3, b0l__CallFunc_Array_Get_Item_6__pf, bpv__NumberLabel3__pf, false);
			}
		case 37:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 3, /*out*/ b0l__CallFunc_Array_Get_Item_7__pf);
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx4Dot__pfG, 4, b0l__CallFunc_Array_Get_Item_7__pf, bpv__NumberLabel4__pf, false);
			}
		case 38:
			{
				bpf__PlacexLine__pfT(bpv__Xx1Dot__pfG, bpv__Xx2Dot__pfG, /*out*/ bpv__Line1__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 39:
			{
				bpf__PlacexLine__pfT(bpv__Xx2Dot__pfG, bpv__Xx3Dot__pfG, /*out*/ bpv__Line2__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 40:
			{
				bpf__PlacexLine__pfT(bpv__Xx3Dot__pfG, bpv__Xx4Dot__pfG, /*out*/ bpv__Line3__pf, /*out*/ bpv__LinexReset__pfT);
				__CurrentState = -1;
				break;
			}
		case 41:
			{
				bpv__LackxofxDataxWarning__pfTTT = FString(TEXT("Not enough data to graph. Please attempt this speech at least two time to display data."));
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 4);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_9__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_6__pf);
				bpv__XxSpotx1__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_9__pf;
			}
		case 43:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 3);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_10__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_7__pf);
				bpv__XxSpotx2__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_10__pf;
			}
		case 44:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 2);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_11__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_8__pf);
				bpv__XxSpotx3__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_11__pf;
			}
		case 45:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LastxIndexxAttemptxx__pfTTTQ, 1);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_12__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Subtract_IntInt_ReturnValue_9__pf);
				bpv__XxSpotx4__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_12__pf;
			}
		case 46:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_13__pf = UKismetStringLibrary::Conv_IntToString(bpv__LastxIndexxAttemptxx__pfTTTQ);
				bpv__XxSpotx5__pfGT = bpfv__CallFunc_Conv_IntToString_ReturnValue_13__pf;
			}
		case 47:
			{
				bpf__GetxData__pfT();
				__CurrentState = 1;
				break;
			}
		case 48:
			{
				__CurrentState = 49;
				break;
			}
		case 49:
			{
				bpf__ResetxGraph__pfT();
			}
		case 50:
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
		case 51:
			{
				bpv__YxaxisxTitle__pfGT = FString(TEXT("Total Time Speaking"));
			}
		case 52:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__115 = {};
				bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf = FCustomThunkTemplates::Array_IsValidIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__115)), 1);
				if (!bpfv__CallFunc_Array_IsValidIndex_ReturnValue__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 53:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__116 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__116)));
				TArray<FAttempt_Struct__pf3774553483>  __Local__117 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__117)), bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				bpv__LastxIndexxAttemptxx__pfTTTQ = b0l__CallFunc_Array_Get_Item_2__pf.bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf;
			}
		case 54:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__118 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__118)));
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 55:
			{
				bpv__NumberxofxGraphingxPoints__pfTTT = 2;
				__CurrentState = 11;
				break;
			}
		case 56:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__119 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__119)));
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 57:
			{
				bpv__NumberxofxGraphingxPoints__pfTTT = 3;
				__CurrentState = 18;
				break;
			}
		case 58:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__120 = {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_GI__pf)) ? (b0l__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__120)));
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 60;
					break;
				}
			}
		case 59:
			{
				bpv__NumberxofxGraphingxPoints__pfTTT = 4;
				__CurrentState = 28;
				break;
			}
		case 60:
			{
				bpv__NumberxofxGraphingxPoints__pfTTT = 5;
				__CurrentState = 42;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UTotal_Time_Graph_C__pf517162645::bpf__CreateGraphBySwitcher__pf()
{
	bpf__ExecuteUbergraph_Total_Time_Graph__pf_0(48);
}
void UTotal_Time_Graph_C__pf517162645::bpf__ResetxGraph__pfT()
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(16);
				__StateStack.Push(11);
				__StateStack.Push(8);
				__StateStack.Push(3);
			}
		case 2:
			{
				bpv__LackxofxDataxWarning__pfTTT = FString(TEXT(""));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				bpv__XxSpotx1__pfGT = FString(TEXT(""));
			}
		case 4:
			{
				bpv__XxSpotx2__pfGT = FString(TEXT(""));
			}
		case 5:
			{
				bpv__XxSpotx3__pfGT = FString(TEXT(""));
			}
		case 6:
			{
				bpv__XxSpotx4__pfGT = FString(TEXT(""));
			}
		case 7:
			{
				bpv__XxSpotx5__pfGT = FString(TEXT(""));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpv__YxSpotx1__pfGT = FString(TEXT(""));
			}
		case 9:
			{
				bpv__YxSpotx3__pfGT = FString(TEXT(""));
			}
		case 10:
			{
				bpv__YxSpotx5__pfGT = FString(TEXT(""));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx1Dot__pfG, 1, 0.000000, bpv__NumberLabel1__pf, true);
			}
		case 12:
			{
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx2Dot__pfG, 2, 0.000000, bpv__NumberLabel2__pf, true);
			}
		case 13:
			{
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx3Dot__pfG, 3, 0.000000, bpv__NumberLabel3__pf, true);
			}
		case 14:
			{
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx4Dot__pfG, 4, 0.000000, bpv__NumberLabel4__pf, true);
			}
		case 15:
			{
				bpf__SetxDotxPosition__pfTT(/*out*/ bpv__Xx5Dot__pfG, 5, 0.000000, bpv__NumberLabel5__pf, true);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpv__LinexReset__pfT = true;
			}
		case 17:
			{
				bpf__PlacexLine__pfT(((UImage*)nullptr), ((UImage*)nullptr), /*out*/ bpv__Line1__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 18:
			{
				bpf__PlacexLine__pfT(((UImage*)nullptr), ((UImage*)nullptr), /*out*/ bpv__Line2__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 19:
			{
				bpf__PlacexLine__pfT(((UImage*)nullptr), ((UImage*)nullptr), /*out*/ bpv__Line3__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 20:
			{
				bpf__PlacexLine__pfT(((UImage*)nullptr), ((UImage*)nullptr), /*out*/ bpv__Line4__pf, /*out*/ bpv__LinexReset__pfT);
			}
		case 21:
			{
				bpv__LinexReset__pfT = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UTotal_Time_Graph_C__pf517162645::bpf__SetxYxaxis__pfTG()
{
	FVector2D bpfv__NewLocalVar_0__pf(EForceInit::ForceInit);
	float bpfv__MaxxTimexxsecondsx__pfTTLK{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_FindSubstring_ReturnValue__pf{};
	int32 bpfv__CallFunc_FindSubstring_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Array_Get_Item__pf{};
	float bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__MaxxTimexxsecondsx__pfTTLK = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpv__MaxxTimexxSecondsxxPublicx__pfTTLKLK = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__DataxBeingxUsed__pfTT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(24);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item_1__pf, bpfv__MaxxTimexxsecondsx__pfTTLK);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__MaxxTimexxsecondsx__pfTTLK = bpfv__CallFunc_Array_Get_Item_1__pf;
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__DataxBeingxUsed__pfTT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpv__MaxxTimexxSecondsxxPublicx__pfTTLKLK = bpfv__CallFunc_Array_Get_Item_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_FTrunc_ReturnValue_1__pf, 9);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpv__YxSpotx5__pfGT = bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 2.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 9);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 2.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpv__YxSpotx3__pfGT = bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf;
			}
		case 15:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 600.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 16:
			{
				bpv__YxSpotx1__pfGT = FString(TEXT("0:00"));
			}
		case 17:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpv__YxSpotx1__pfGT, FString(TEXT("0:00")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(210.000000, 600.000000);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx1__pfG);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 19:
			{
				bpfv__CallFunc_FindSubstring_ReturnValue_1__pf = UKismetStringLibrary::FindSubstring(bpv__YxSpotx3__pfGT, FString(TEXT(":")), false, false, 0);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_FindSubstring_ReturnValue_1__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 20:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx3__pfG);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(210.000000, 332.500000);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
			}
		case 21:
			{
				bpfv__CallFunc_FindSubstring_ReturnValue__pf = UKismetStringLibrary::FindSubstring(bpv__YxSpotx5__pfGT, FString(TEXT(":")), false, false, 0);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_FindSubstring_ReturnValue__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 22:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx5__pfG);
				bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf = UKismetMathLibrary::MakeVector2D(210.000000, 65.000000);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, FString(TEXT("0")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpv__YxSpotx5__pfGT = bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf;
				__CurrentState = 13;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__MaxxTimexxsecondsx__pfTTLK, 2.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, FString(TEXT("0")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpv__YxSpotx3__pfGT = bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf;
				__CurrentState = 15;
				break;
			}
		case 26:
			{
				bpv__YxSpotx1__pfGT = FString(TEXT("00:00"));
				__CurrentState = 17;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx1__pfG);
				bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf = UKismetMathLibrary::MakeVector2D(200.000000, 600.000000);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf);
				}
				__CurrentState = 19;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx3__pfG);
				bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf = UKismetMathLibrary::MakeVector2D(200.000000, 332.500000);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf);
				}
				__CurrentState = 21;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Yx5__pfG);
				bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf = UKismetMathLibrary::MakeVector2D(200.000000, 65.000000);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_5__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UTotal_Time_Graph_C__pf517162645::bpf__GetxData__pfT()
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UMenuGI_C__pf3730827578* bpfv__K2Node_DynamicCast_AsMenu_GI__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	FAttempt_Struct__pf3774553483 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsMenu_GI__pf = Cast<UMenuGI_C__pf3730827578>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMenu_GI__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpv__TempxLoopxCounter__pfTT = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__TempxLoopxCounter__pfTT, bpv__NumberxofxGraphingxPoints__pfTTT);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(3);
			}
		case 5:
			{
				TArray<FAttempt_Struct__pf3774553483>  __Local__121 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(bpfv__K2Node_DynamicCast_AsMenu_GI__pf)) ? (bpfv__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__121)));
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, bpv__TempxLoopxCounter__pfTT);
				TArray<FAttempt_Struct__pf3774553483>  __Local__122 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpfv__K2Node_DynamicCast_AsMenu_GI__pf)) ? (bpfv__K2Node_DynamicCast_AsMenu_GI__pf->bpv__AttemptsxOfxSelectedxSpeech__pfTTT) : (__Local__122)), bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__DataxBeingxUsed__pfTT, bpfv__CallFunc_Array_Get_Item__pf.bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf);
			}
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__TempxLoopxCounter__pfTT, 1);
				bpv__TempxLoopxCounter__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Reverse(bpv__DataxBeingxUsed__pfTT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UTotal_Time_Graph_C__pf517162645::bpf__SetxDotxPosition__pfTT(/*out*/ UImage*& bpp__Dot__pf, int32 bpp__DotxNumber__pfT, float bpp__DataxNumber__pfT, UTextBlock* bpp__Label__pf, bool bpp__DotxReset__pfT)
{
	float bpfv__LabelxY__pfT{};
	float bpfv__YxPosition__pfG{};
	float bpfv__XxPosition__pfG{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	bool bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__DotxReset__pfT)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 27;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 1);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 2);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 30;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 3);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 31;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 4);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 32;
					break;
				}
				bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_IntInt(bpp__DotxNumber__pfT, 5);
				if (!bpfv__K2Node_SwitchInteger_CmpSuccess_1__pf)
				{
					__CurrentState = 33;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__XxPosition__pfG = 330.000000;
			}
		case 5:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpp__DataxNumber__pfT, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_FTrunc_ReturnValue_1__pf, 9);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpp__DataxNumber__pfT, 60.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpp__DataxNumber__pfT, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(":")));
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf);
				if(::IsValid(bpp__Label__pf))
				{
					bpp__Label__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 7:
			{
				bpfv__YxPosition__pfG = 600.000000;
			}
		case 8:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpp__DataxNumber__pfT, bpv__MaxxTimexxSecondsxxPublicx__pfTTLKLK);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(100, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 5.350000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__YxPosition__pfG, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__YxPosition__pfG = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf;
			}
		case 9:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__YxPosition__pfG, 38.000000);
				bpfv__LabelxY__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 10:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Dot__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf = UKismetMathLibrary::MakeVector2D(bpfv__XxPosition__pfG, bpfv__YxPosition__pfG);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_4__pf);
				}
			}
		case 11:
			{
				if(::IsValid(bpp__Dot__pf))
				{
					bpp__Dot__pf->UImage::SetOpacity(1.000000);
				}
			}
		case 12:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Dot__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetZOrder(1);
				}
			}
		case 13:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__MaxxTimexxSecondsxxPublicx__pfTTLKLK, 600.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Label__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__XxPosition__pfG, 8.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__LabelxY__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 15:
			{
				if(::IsValid(bpp__Label__pf))
				{
					bpp__Label__pf->UTextBlock::SetOpacity(1.000000);
				}
			}
		case 16:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Label__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetZOrder(2);
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpp__DataxNumber__pfT, 60.000000);
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpp__DataxNumber__pfT, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, FString(TEXT("0")));
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf);
				if(::IsValid(bpp__Label__pf))
				{
					bpp__Label__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 18:
			{
				bpfv__XxPosition__pfG = 330.000000;
			}
		case 19:
			{
				bpfv__YxPosition__pfG = 642.000000;
			}
		case 20:
			{
				bpfv__LabelxY__pfT = 640.000000;
			}
		case 21:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Dot__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf = UKismetMathLibrary::MakeVector2D(bpfv__XxPosition__pfG, bpfv__YxPosition__pfG);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpp__Dot__pf))
				{
					bpp__Dot__pf->UImage::SetOpacity(0.000000);
				}
			}
		case 23:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Label__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__XxPosition__pfG, 5.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__LabelxY__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf);
				}
			}
		case 24:
			{
				if(::IsValid(bpp__Label__pf))
				{
					bpp__Label__pf->UTextBlock::SetOpacity(0.000000);
				}
			}
		case 25:
			{
				if(::IsValid(bpp__Label__pf))
				{
					bpp__Label__pf->SetText(FText::GetEmpty());
				}
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpfv__XxPosition__pfG = 630.000000;
				__CurrentState = 19;
				break;
			}
		case 27:
			{
				bpfv__XxPosition__pfG = 930.000000;
				__CurrentState = 19;
				break;
			}
		case 28:
			{
				bpfv__XxPosition__pfG = 1230.000000;
				__CurrentState = 19;
				break;
			}
		case 29:
			{
				bpfv__XxPosition__pfG = 1530.000000;
				__CurrentState = 19;
				break;
			}
		case 30:
			{
				bpfv__XxPosition__pfG = 630.000000;
				__CurrentState = 5;
				break;
			}
		case 31:
			{
				bpfv__XxPosition__pfG = 930.000000;
				__CurrentState = 5;
				break;
			}
		case 32:
			{
				bpfv__XxPosition__pfG = 1230.000000;
				__CurrentState = 5;
				break;
			}
		case 33:
			{
				bpfv__XxPosition__pfG = 1530.000000;
				__CurrentState = 5;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpp__Label__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__XxPosition__pfG, 5.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, bpfv__LabelxY__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
				__CurrentState = 15;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UTotal_Time_Graph_C__pf517162645::bpf__PlacexLine__pfT(UImage* bpp__ReferencexxxDotx1__pfTGTT, UImage* bpp__ReferencexxxDotx2__pfTGTT, /*out*/ UImage*& bpp__LinextoxSet__pfTT, /*out*/ bool& bpp__Resetx__pfzy)
{
	UImage* bpfv__LinexReference__pfT{};
	UImage* bpfv__Dotx2__pfT{};
	UImage* bpfv__Dotx1__pfT{};
	float bpfv__Y1__pf{};
	float bpfv__Y2__pf{};
	float bpfv__X1__pf{};
	float bpfv__X2__pf{};
	float bpfv__HigherxPosition__pfT{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Distance2D_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	FVector2D bpfv__CallFunc_GetPosition_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakVector2D_X_1__pf{};
	float bpfv__CallFunc_BreakVector2D_Y_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_DegAtan_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf(EForceInit::ForceInit);
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__X2__pf = 0.000000;
			}
		case 2:
			{
				bpfv__X1__pf = 0.000000;
			}
		case 3:
			{
				bpfv__Y2__pf = 0.000000;
			}
		case 4:
			{
				bpfv__Y1__pf = 0.000000;
			}
		case 5:
			{
				bpfv__Dotx1__pfT = bpp__ReferencexxxDotx1__pfTGTT;
			}
		case 6:
			{
				bpfv__Dotx2__pfT = bpp__ReferencexxxDotx2__pfTGTT;
			}
		case 7:
			{
				bpfv__LinexReference__pfT = bpp__LinextoxSet__pfTT;
			}
		case 8:
			{
				if (!bpp__Resetx__pfzy)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderOpacity(0.000000);
				}
			}
		case 10:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(0.000000, 0.000000);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__LinexReference__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_6__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 11:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(1.000000, 1.000000);
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderScale(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderTransformAngle(0.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx2__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_3__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_3__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_X_1__pf, 15.000000);
				bpfv__X2__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf;
			}
		case 14:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx1__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_2__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_2__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_X__pf, 15.000000);
				bpfv__X1__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf;
			}
		case 15:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx2__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_3__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_3__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_Y_1__pf, 15.000000);
				bpfv__Y2__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf;
			}
		case 16:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx1__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_2__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::GetPosition();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetPosition_ReturnValue_2__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_Y__pf, 15.000000);
				bpfv__Y1__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 17:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__Y2__pf, bpfv__Y1__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 18:
			{
				bpfv__HigherxPosition__pfT = bpfv__Y2__pf;
			}
		case 19:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__LinexReference__pfT);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__Y2__pf, bpfv__Y1__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__X2__pf, bpfv__X1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpfv__X1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf, 100.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__HigherxPosition__pfT, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf, 2.500000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_5__pf->UCanvasPanelSlot::SetPosition(bpfv__CallFunc_MakeVector2D_ReturnValue_3__pf);
				}
			}
		case 20:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx1__pfT);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__Dotx2__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::GetPosition();
				}
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetPosition_ReturnValue_1__pf = bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::GetPosition();
				}
				bpfv__CallFunc_Distance2D_ReturnValue__pf = UKismetMathLibrary::Distance2D(bpfv__CallFunc_GetPosition_ReturnValue_1__pf, bpfv__CallFunc_GetPosition_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Distance2D_ReturnValue__pf, 200.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 1.000000);
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderScale(bpfv__CallFunc_MakeVector2D_ReturnValue_2__pf);
				}
			}
		case 21:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__Y2__pf, bpfv__Y1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__X2__pf, bpfv__X1__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf);
				bpfv__CallFunc_DegAtan_ReturnValue__pf = UKismetMathLibrary::DegAtan(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf);
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderTransformAngle(bpfv__CallFunc_DegAtan_ReturnValue__pf);
				}
			}
		case 22:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpfv__LinexReference__pfT);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_4__pf->UCanvasPanelSlot::SetZOrder(0);
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__LinexReference__pfT))
				{
					bpfv__LinexReference__pfT->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				bpfv__HigherxPosition__pfT = bpfv__Y1__pf;
				__CurrentState = 19;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UTotal_Time_Graph_C__pf517162645::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/white-circle-png-free-download-white-circle-png-1890_1890.white-circle-png-free-download-white-circle-png-1890_1890 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UTotal_Time_Graph_C__pf517162645::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
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
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Stutter_Speak_Content/Materials/UIShapes_Panels/1200px-Gold_Star_svg.1200px-Gold_Star_svg 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
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
struct FRegisterHelper__UTotal_Time_Graph_C__pf517162645
{
	FRegisterHelper__UTotal_Time_Graph_C__pf517162645()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Total_Time_Graph"), &UTotal_Time_Graph_C__pf517162645::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UTotal_Time_Graph_C__pf517162645 Instance;
};
FRegisterHelper__UTotal_Time_Graph_C__pf517162645 FRegisterHelper__UTotal_Time_Graph_C__pf517162645::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
