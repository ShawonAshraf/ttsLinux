# ttsLinux
> A  Simple Text To Speech for Linux


A simple text to speech program for computers running on linux.

## Dependencies
- `espeak`

You can install `espeak` in `Ubuntu` by typing the
following command in the terminal. If you're not in `Ubuntu`, refer to the package manager for your distro.

```bash
sudo apt-get install espeak
```

## Running
```bash
g++ src/tts.cpp -o tts
./tts
```
