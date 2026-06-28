#ifndef KAITAI_STRUCT_H
#define KAITAI_STRUCT_H

#include <kaitai/kaitaistream.h>

namespace kaitai {

class kstruct {
public:
    kstruct(kstream *_io) { m__io = _io; }
    virtual ~kstruct() {}
protected:
    kstream *m__io;
public:
    kstream *_io() { return m__io; }
    void _set_io(kstream *io) { m__io = io; }
    virtual kstruct *_parent() const { return nullptr; }
};

}

#endif
