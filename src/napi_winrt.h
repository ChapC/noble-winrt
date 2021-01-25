#pragma once


#include "winrt/base.h"
namespace winrt::impl
{
    template <typename Async>
    auto wait_for(Async const& async, Windows::Foundation::TimeSpan const& timeout);
}
#include <napi.h>
#include "peripheral.h"

std::vector<winrt::guid> getUuidArray(const Napi::Value& value);
bool getBool(const Napi::Value& value, bool def);

winrt::guid napiToUuid(Napi::String string);
Data napiToData(Napi::Buffer<unsigned char> buffer);
int napiToNumber(Napi::Number number);
