Installation and compilation guide for php5-couchdb
===================================================

    $ sudo apt-get install libyajl-dev libyaijl2
    $ cd vendor/pillowtalk
    $ ./configure
    $ cmake -DCMAKE_INSTALL_PREFIX=/usr
    $ make
    $ cd ../..

The next command will install the library to **/usr/lib/libpillowtalk.so**

    $ sudo make install

If not already done we can create the extension source with

	$ pecl-gen -f description.xml

So you can start writing this extension from scratch again ;)
Now we configure our extension and compile/install it.

	$ phpize
	$ ./configure
	$ make
	$ sudo make install

Don't forget to add the following line to your php.ini file:

	extension="php_couchdb.so"

You can also install with PEAR integration:

	$ pear install package.xml

