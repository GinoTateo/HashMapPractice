//
//  main.cpp
//  HashMapPractice
//
//  Created by Gino Tateo on 1/3/23.
//

#include <iostream>
#include <map>


struct CityRecord{
    
    std::string Name;
    double Population; // In millions
    double Latitude, Longitude;
};

int main() {
    std::map<std::string, CityRecord> cityMap;
    
    cityMap["New York"] = CityRecord {"New York", 8.468, 40.7128, 74.0060};
    cityMap["Boston"] = CityRecord {"Boston", .674, 42.3601, 71.0589};
    cityMap["Buffalo"] = CityRecord {"Buffalo", .276, 42.8864, 78.8784};
    cityMap["Cincinatti"] = CityRecord {"Cinciniatti", .308, 39.1031, 84.5120};
    cityMap["Chicago"] = CityRecord {"Chicago", 2.697, 41.8781, 87.6298};
    cityMap["Dallas"] = CityRecord {"Dallas", 1.288, 32.7767, 96.7970};
    cityMap["Los Angeles"] = CityRecord {"Los Angeles", 3.849, 34.0522, 118.2437};
    cityMap["San Francisco"] = CityRecord {"San Francisco", .815, 37.7749, 122.4194};
    
    CityRecord& SFData = cityMap["San Francisco"];
    std::cout << SFData.Population << " Million" << std::endl;
}
