/*
 * GarbageBlock.h
 *
 *  Created on: Aug 17, 2015
 *      Author: axel
 */

#ifndef GARBAGEBLOCK_H_
#define GARBAGEBLOCK_H_

#include "Block.h"


//need to put this here because of circular dependencies...
enum class GarbageBlockType {
	NORMAL, GRAY
};

class GarbageBlock {

	friend class Board;

public:
	GarbageBlock(int,int,int,int, GarbageBlockType);
	virtual ~GarbageBlock();

	int getH() const {
		return _h;
	}

	int getW() const {
		return _w;
	}

	int getX() const {
		return _x;
	}

	int getY() const {
		return _y;
	}

private:
	int _x, _y; //coordinates of upper-right corner;
	int _w, _h;
	GarbageBlockType _type;
	Block _bufferRow[6];
	void fillBufferRow();
};

#endif /* GARBAGEBLOCK_H_ */
