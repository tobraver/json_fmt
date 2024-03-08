#ifndef __JSON_FMT_H__
#define __JSON_FMT_H__

#include <iostream>
#include "third/nlohmann/json.hpp"

// json value, parse, create
#define Json_t              nlohmann::json
#define Json_Parse(string)  nlohmann::json::parse(string)
#define Json_Create(object) object.dump()
#define Json_Format(object) object.dump(4)

// define struct type to json
#define JSON_DEFINE_TYPE    NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE

// json try catch
#define JSON_TRY_START      try {
#define JSON_TRY_END        } \
    catch (nlohmann::json::exception& e) { std::cout << "[" << __FILE__ << "] [" << __LINE__ << "] " << "JSON EXCEPTION: "  << e.what() << std::endl;} \
    catch (...){ std::cout << "[" << __FILE__ << "] [" << __LINE__ << "] " << "UNKNOW EXCEPTION:" << std::endl; }

void json_fmt_init(void);
void json_fmt_deinit(void);

#endif // !__JSON_FMT_H__
