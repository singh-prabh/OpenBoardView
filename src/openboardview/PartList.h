#pragma once

#include "Board.h"
#include "FileFormats/BRDFile.h"

class PartList {
  public:
	PartList(TcharStringCallback cbNetSelected);
	~PartList();

	void Draw(const char *title, bool *p_open, Board *board);

  private:
	TcharStringCallback cbNetSelected_;
};
