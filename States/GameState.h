/*
 * GameState.h
 *
 *  Created on: 9.12.2015
 *      Author: axelw
 */

#ifndef STATES_GAMESTATE_H_
#define STATES_GAMESTATE_H_

#include "../Game/Game.h"
#include "../Game/KeyboardController.h"
#include "../Rendering/GameRenderer.h"
#include "State.h"

class GameState : public State {
public:
	GameState();
	void tick();
	SDL_Texture* render();
	virtual ~GameState();
private:
	GameRenderer _renderer;
	Game _game;
	KeyboardControllerConfig _p1keys;
	KeyboardControllerConfig _p2keys;
	KeyboardController _kbc;
	KeyboardController _kbc2;
};

#endif /* STATES_GAMESTATE_H_ */
