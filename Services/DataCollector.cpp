//
// Created by root on 17-4-19.
//

#include "Services.hpp"

void AMSD::Services::DataCollector(void *userp) {
	cerr << "amsd: Services::DataCollector fired\n";

	DataProcessing::Collector thisCollector;

	thisCollector.Collect();

	cerr << "amsd: Services::DataCollector Done\n";

}