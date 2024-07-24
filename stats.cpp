#include "stats.h"

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& statContainer) {
    //Implement statistics here
	Statistics::Stats stat;
	if(statContainer.size()>0)
	{
		double totalStat=0.0;
		for(auto statVar : statContainer)
			totalStat+=statVar;
		stat.average=totalStat/(statContainer.size());
		stat.max=*max_element(statContainer.begin(),statContainer.end());
		stat.min=*min_element(statContainer.begin(),statContainer.end());
	}
	return stat;
}
