from captcha.audio import AudioCaptcha
audio = AudioCaptcha()
captcha_text = "5454"
audio_data = audio.generate(captcha_text)
audio_file = "audio"+captcha_text+'.wav'
audio.write(captcha_text, audio_file)
