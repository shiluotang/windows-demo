#ifndef FORM_HPP_INCLUDED
#define FORM_HPP_INCLUDED

#include <iosfwd>

namespace org {
    namespace sqg {

        class form {
            public:
                void setName(xstring const&);
                xstring getName() const;

                size_t getWidth() const;
                void setWidth(size_t);

                size_t getHeight() const;
                void setHeight(size_t);
        };
    }
}

#endif // FORM_HPP_INCLUDED
