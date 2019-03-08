init: qmk_firmware
	rm ./qmk_firmware/keyboards/nonlogical
	ln -s $(shell pwd)/keyboards ./qmk_firmware/keyboards/nonlogical

qmk_firmware:
	git submodule init
	git submodule update --recursive

build.wasd:
	make -C qmk_firmware nonlogical/rewired_wasd:build
