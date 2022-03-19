#pragma once
#include "Application/ApplicationLayer.h"
#include "json.hpp"

/**
 * This example layer handles creating a default test scene, which we will use
 * as an entry point for creating a sample scene
 */
class DefaultSceneLayer final : public ApplicationLayer {
public:
	MAKE_PTRS(DefaultSceneLayer)

		DefaultSceneLayer();
	virtual ~DefaultSceneLayer();

	// Inherited from ApplicationLayer

	virtual void OnUpdate() override;

	virtual void OnAppLoad(const nlohmann::json& config) override;

	void help(int toggle);
	void keyboard();
	int toggle;
	//Sptr scene;


protected:
	void _CreateScene();



	//Gameplay::Scene::Sptr _currentScene;
};