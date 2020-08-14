#pragma once
#include <string>

class GrAttrib
{
private:
    std::string lineColor;
    std::string fillColor;
public:
    GrAttrib() : lineColor("°ËÁ¤»ö"), fillColor("Èò»ö") {}
    GrAttrib(const std::string& lc, const std::string& fc)
        : lineColor(lc), fillColor(fc) {}

    void setLineColor(const std::string& lc)
    {
        lineColor = lc;
    }
    void setFillColor(const std::string& fc)
    {
        fillColor = fc;
    }

    std::string getLineColor() const
    {
        return lineColor;
    }
    std::string getFillColor() const
    {
        return fillColor;
    }
};

extern GrAttrib curAttrib;