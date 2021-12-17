#ifndef OUTPUTPROCESSINGUNIT_H
#define OUTPUTPROCESSINGUNIT_H
#include "Observable.h"
#include "..\Data-Structures\vector.h"
/*
* TODO: mohamed
* #include "OutputProcessingBehavior.h"
* TODO: TO BE DONE LATER
* #include "..\Data-Structures\StationData.h"
*/

class OutputProcessingUnit : public Observable
{
public:
	OutputProcessingUnit(/*StationData* */);
	~OutputProcessingUnit();


	virtual void notify();
	virtual void add(Observer* obs);
	virtual void remove(Observer* obs);

	Vector<int>* getProcessedData();
	void clearProcessedData();

	/*
	* the only class can change the behavior is the simulation manager
	* void setProcessingBehavior(OutputProcessingBehavior*);
	*/

private:
	Vector<int>* processedData;
	/*
	* OutputProcessingBehavior* processingBehavior;
	*/
	/*
	* StationData* stationData;
	*/
};
#endif // !OUTPUTPROCESSINGUNIT_H

