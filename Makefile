init: ./qmk_firmware/keyboards
	-rm ./qmk_firmware/keyboards/nonlogical
	ln -s $(shell pwd)/keyboards ./qmk_firmware/keyboards/nld

./qmk_firmware/keyboards:
	git submodule init
	git submodule update --recursive

build.wasd:
	make -C qmk_firmware nld/rewired_wasd:build
