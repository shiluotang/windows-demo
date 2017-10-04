#ifndef FORM_HPP_INCLUDED
#define FORM_HPP_INCLUDED

#include <iosfwd>

namespace org {
    namespace sqg {

        class form {
            public:
                form();
                form(form const&);
                virtual ~form();

                form& name(xstring const&);
                xstring name() const;

                size_t width() const;
                form& width(size_t);

                size_t height() const;
                form& height(size_t);
            protected:
                struct impl_data;
                impl_data *_M_data;
        };
    }
}

#endif // FORM_HPP_INCLUDED
