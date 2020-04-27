//
//  Player.cpp
//  hw1-versioncontrol
//
//  Created by Daniel Kim on 4/26/20.
//  Copyright © 2020 John Kim. All rights reserved.
//

#include "Card.h"

Player::Player (int m) {
	Player::money = m;
}

int Player::get_money () {
	return Player::money;
}

void Player::set_money (int n) {
	Player::money = n;
}
