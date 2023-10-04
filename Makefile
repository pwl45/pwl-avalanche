compile:
	mkdir -p ${HOME}/qmk_firmware/keyboards/avalanche/v4/keymaps/pwl_avalanche
	cp config.h keymap.c ${HOME}/qmk_firmware/keyboards/avalanche/v4/keymaps/pwl_avalanche
	qmk compile -kb avalanche/v4 -km pwl_avalanche

flash:
	mkdir -p ${HOME}/qmk_firmware/keyboards/avalanche/v4/keymaps/pwl_avalanche
	cp config.h keymap.c ${HOME}/qmk_firmware/keyboards/avalanche/v4/keymaps/pwl_avalanche
	qmk flash -kb avalanche/v4 -km pwl_avalanche
