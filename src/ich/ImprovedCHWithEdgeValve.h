// ImprovedCHWithEdgeValve.h: interface for the CImprovedCHWithEdgeValve class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include "../headers.h"
#include "PreviousCH.h"
class CImprovedCHWithEdgeValve : public  CPreviousCH
{
protected:
	virtual bool CheckValidityOfWindow(Window& w);
public:
	CImprovedCHWithEdgeValve(const CRichModel& inputModel, const std::vector<int> &indexOfSourceVerts);
	virtual ~CImprovedCHWithEdgeValve();
};
