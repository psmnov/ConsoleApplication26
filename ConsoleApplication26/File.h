#pragma once
class File {
public:
    virtual void open() = 0;  
    virtual ~File() {}
};