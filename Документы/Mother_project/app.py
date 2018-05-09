from flask import Flask, abort, render_template, request, jsonify, session, redirect

app = Flask("SimpleTaskTracker")
template_dir = 'templates'

@app.route('/', methods=["GET"])
def menu():
    return render_template('menu.html')

if __name__ == "__main__":
    app.secret_key = 'A0Zr98j/3yX R~XHH!jmN]LWX/,?RT'
    app.run(port=8001)