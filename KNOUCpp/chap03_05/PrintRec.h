#pragma once

struct SalesRec {
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
};

void PrSalesRec(const SalesRec &srec);

