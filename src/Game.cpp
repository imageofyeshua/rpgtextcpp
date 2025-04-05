#include "Game.h"
#include "Logger.h"
#include <iostream>

bool Game::Init() { return true; }

void Game::ProcessInputs() { TRPG_LOG("Process Inputs"); }

void Game::Update() { TRPG_ERROR("Update"); }

void Game::Draw() { TRPG_LOG("Draw"); }

Game::Game() : m_bIsRunning(true) {}

Game::~Game() {}

void Game::Run() {
  if (!Init()) {
    m_bIsRunning = false;
  }

  if (m_bIsRunning) {
    ProcessInputs();
    Update();
    Draw();
  }
  std::cout << "Bye Bye\n";
}
