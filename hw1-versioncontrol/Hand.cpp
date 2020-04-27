//
//  Hand.cpp
//  hw1-versioncontrol
//
//  Created by Daniel Kim on 4/26/20.
//  Copyright © 2020 John Kim. All rights reserved.
//

#include "Card.h"

Hand::Hand() {}

int Hand::hand_size() {
	int temp = 0;
	for (int i = 0; cards.size(); i++) {
		temp += cards[i];
	}
	return temp;
}
