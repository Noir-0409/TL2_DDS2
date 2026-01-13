#pragma once
#include "KamataEngine.h"

using namespace KamataEngine;

class GameScene {

public:

	GameScene();

	~GameScene();

void Initialize();

void Update();

void Draw();

private:

	uint32_t textureHandle_ = 0;

	Sprite* sprite_ = nullptr;

};