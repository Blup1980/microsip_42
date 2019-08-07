#pragma once
#include "afx.h"

class CCSVFile : public CStdioFile
{
public:

  enum Mode { modeRead, modeWrite };
  CCSVFile(LPCTSTR lpszFilename, Mode mode = modeRead);
  ~CCSVFile(void);

  bool ReadData(CStringArray &arr);
  void WriteData(CStringArray &arr);

#ifdef _DEBUG

  Mode m_nMode;

#endif

};
