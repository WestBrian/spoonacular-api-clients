/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISearchCustomFoods_200_response_customFoods_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISearchCustomFoods_200_response_customFoods_inner::OAISearchCustomFoods_200_response_customFoods_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISearchCustomFoods_200_response_customFoods_inner::OAISearchCustomFoods_200_response_customFoods_inner() {
    this->initializeModel();
}

OAISearchCustomFoods_200_response_customFoods_inner::~OAISearchCustomFoods_200_response_customFoods_inner() {}

void OAISearchCustomFoods_200_response_customFoods_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_servings_isSet = false;
    m_servings_isValid = false;

    m_image_url_isSet = false;
    m_image_url_isValid = false;

    m_price_isSet = false;
    m_price_isValid = false;
}

void OAISearchCustomFoods_200_response_customFoods_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISearchCustomFoods_200_response_customFoods_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_servings_isValid = ::OpenAPI::fromJsonValue(servings, json[QString("servings")]);
    m_servings_isSet = !json[QString("servings")].isNull() && m_servings_isValid;

    m_image_url_isValid = ::OpenAPI::fromJsonValue(image_url, json[QString("imageUrl")]);
    m_image_url_isSet = !json[QString("imageUrl")].isNull() && m_image_url_isValid;

    m_price_isValid = ::OpenAPI::fromJsonValue(price, json[QString("price")]);
    m_price_isSet = !json[QString("price")].isNull() && m_price_isValid;
}

QString OAISearchCustomFoods_200_response_customFoods_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISearchCustomFoods_200_response_customFoods_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    if (m_servings_isSet) {
        obj.insert(QString("servings"), ::OpenAPI::toJsonValue(servings));
    }
    if (m_image_url_isSet) {
        obj.insert(QString("imageUrl"), ::OpenAPI::toJsonValue(image_url));
    }
    if (m_price_isSet) {
        obj.insert(QString("price"), ::OpenAPI::toJsonValue(price));
    }
    return obj;
}

qint32 OAISearchCustomFoods_200_response_customFoods_inner::getId() const {
    return id;
}
void OAISearchCustomFoods_200_response_customFoods_inner::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISearchCustomFoods_200_response_customFoods_inner::getTitle() const {
    return title;
}
void OAISearchCustomFoods_200_response_customFoods_inner::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_title_Set() const{
    return m_title_isSet;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_title_Valid() const{
    return m_title_isValid;
}

double OAISearchCustomFoods_200_response_customFoods_inner::getServings() const {
    return servings;
}
void OAISearchCustomFoods_200_response_customFoods_inner::setServings(const double &servings) {
    this->servings = servings;
    this->m_servings_isSet = true;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_servings_Set() const{
    return m_servings_isSet;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_servings_Valid() const{
    return m_servings_isValid;
}

QString OAISearchCustomFoods_200_response_customFoods_inner::getImageUrl() const {
    return image_url;
}
void OAISearchCustomFoods_200_response_customFoods_inner::setImageUrl(const QString &image_url) {
    this->image_url = image_url;
    this->m_image_url_isSet = true;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_image_url_Set() const{
    return m_image_url_isSet;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_image_url_Valid() const{
    return m_image_url_isValid;
}

double OAISearchCustomFoods_200_response_customFoods_inner::getPrice() const {
    return price;
}
void OAISearchCustomFoods_200_response_customFoods_inner::setPrice(const double &price) {
    this->price = price;
    this->m_price_isSet = true;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_price_Set() const{
    return m_price_isSet;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::is_price_Valid() const{
    return m_price_isValid;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_servings_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_price_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISearchCustomFoods_200_response_customFoods_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_title_isValid && m_servings_isValid && m_image_url_isValid && m_price_isValid && true;
}

} // namespace OpenAPI
