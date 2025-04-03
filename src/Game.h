#ifndef GAME_H
#define GAME_H

class Game {
private:
  bool m_bIsRunning;

  bool Init();

  void ProcessInputs();
  void Update();
  void Draw();

public:
  Game();
  ~Game();

  void Run();
};

#endif // !GAME_H
