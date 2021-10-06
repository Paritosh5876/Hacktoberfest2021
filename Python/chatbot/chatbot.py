import speech_recognition as sr
import random

def greeting():
    print(random.choice(["hello", "hi", "Hey", "what's up", "hey! how are you doing"]))

def farewell():
    print(random.choice(["See you later", "Goodbye", "I am Leaving", "Have a Good day", "bye", "see ya"]))

def commands():
    def check_message(check):
        voice_received = hearing()
        words_of_message = voice_received.split()

        if set(check).issubset(set(words_of_message)):
            return True
        else:
            return False

                #chatbot
    if check_message(['hi'])  or check_message(['hello'])  or check_message(['whats','up']):
        greeting()
    elif check_message(['bye','buddy']) or check_message(['see','you','later']) or check_message(['bye']):
        farewell()

def hearing():
    voice_received = ''
    # obtain audio from the microphone
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Say something!")
        audio = r.listen(source)
        
    # recognize speech using Google Speech Recognition
    try:
        # for testing purposes, we're just using the default API key
        # to use another API key, use `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
        # instead of `r.recognize_google(audio)`
        print("Google Speech Recognition thinks you said " + r.recognize_google(audio))
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))

    commands(voice_received )


if __name__ == "__main__":
    hearing()

