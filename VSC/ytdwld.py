from pytube import Youtube
link = str(input("Enter the link: "))
yt = Youtube(link)
stream = yt.streams.get_highest_resolution()
stream.download()
print("Download Successful")

