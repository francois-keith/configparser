#!/bin/sh

aclocal
autoconf
autoheader
automake --add-missing
mkdir m4
autoreconf --install

echo "Flex and Bison ..."
. ./src/FlexBison.sh

