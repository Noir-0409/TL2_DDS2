#include "GameScene.h"

using namespace KamataEngine;

GameScene::GameScene() {}

GameScene::~GameScene() {

delete sprite_;
	delete model_;

}

void GameScene::Initialize() {

textureHandle_ = TextureManager::Load("uvChecker.png");

sprite_ = Sprite::Create(textureHandle_, {100, 50});

model_ = Model::Create();

worldTransform_.Initialize();

camera_.Initialize();

}

void GameScene::Update() {}

void GameScene::Draw() {

Model::PreDraw();

model_->Draw(worldTransform_, camera_, textureHandle_);

Model::PostDraw();

Sprite::PreDraw();

//sprite_->Draw();

Sprite::PostDraw();

}