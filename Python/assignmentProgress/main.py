import urllib2


response = urllib2.urlopen('https://docs.google.com/document/d/1KGxWEgWdFDwxnMOrTAiI-QjNaJvexqAtxdzcS1nEUmw/preview')

html = response.read()
print html