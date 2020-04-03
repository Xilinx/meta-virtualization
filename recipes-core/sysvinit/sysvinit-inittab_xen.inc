SERIAL_CONSOLES += "115200;hvc0"

# Ensure that hvc0 is removed from the inittab on first boot
# if the console doesn't exist
SERIAL_CONSOLES_CHECK += "115200;hvc0"
