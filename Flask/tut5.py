from flask import Flask,redirect,url_for, render_template, request, session
from datetime import timedelta

app = Flask(__name__)
app.secret_key = "6969"
app.permanent_session_lifetime = timedelta(minutes = 5)


@app.route("/login", methods = ["POST", "GET"])
def login():
    if request.method == "POST":
        session.permanent = True
        var = request.form["nm"]
        session["name"] = var
        return redirect(url_for("home"))
    else:
        if "name" in session:
            return redirect(url_for("home"))
        return render_template("login.html")

@app.route("/name")
def home():
    if "name" in session:
        return render_template("tut4.html",content = session["name"])
    else:
        return redirect(url_for("login"))
    
@app.route("/logout")
def logout():
    session.pop("name", None)
    return redirect(url_for("login"))
    

if __name__ == "__main__":
    app.run(debug=True)