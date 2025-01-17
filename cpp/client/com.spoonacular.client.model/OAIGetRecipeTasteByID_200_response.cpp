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

#include "OAIGetRecipeTasteByID_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetRecipeTasteByID_200_response::OAIGetRecipeTasteByID_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetRecipeTasteByID_200_response::OAIGetRecipeTasteByID_200_response() {
    this->initializeModel();
}

OAIGetRecipeTasteByID_200_response::~OAIGetRecipeTasteByID_200_response() {}

void OAIGetRecipeTasteByID_200_response::initializeModel() {

    m_sweetness_isSet = false;
    m_sweetness_isValid = false;

    m_saltiness_isSet = false;
    m_saltiness_isValid = false;

    m_sourness_isSet = false;
    m_sourness_isValid = false;

    m_bitterness_isSet = false;
    m_bitterness_isValid = false;

    m_savoriness_isSet = false;
    m_savoriness_isValid = false;

    m_fattiness_isSet = false;
    m_fattiness_isValid = false;

    m_spiciness_isSet = false;
    m_spiciness_isValid = false;
}

void OAIGetRecipeTasteByID_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetRecipeTasteByID_200_response::fromJsonObject(QJsonObject json) {

    m_sweetness_isValid = ::OpenAPI::fromJsonValue(sweetness, json[QString("sweetness")]);
    m_sweetness_isSet = !json[QString("sweetness")].isNull() && m_sweetness_isValid;

    m_saltiness_isValid = ::OpenAPI::fromJsonValue(saltiness, json[QString("saltiness")]);
    m_saltiness_isSet = !json[QString("saltiness")].isNull() && m_saltiness_isValid;

    m_sourness_isValid = ::OpenAPI::fromJsonValue(sourness, json[QString("sourness")]);
    m_sourness_isSet = !json[QString("sourness")].isNull() && m_sourness_isValid;

    m_bitterness_isValid = ::OpenAPI::fromJsonValue(bitterness, json[QString("bitterness")]);
    m_bitterness_isSet = !json[QString("bitterness")].isNull() && m_bitterness_isValid;

    m_savoriness_isValid = ::OpenAPI::fromJsonValue(savoriness, json[QString("savoriness")]);
    m_savoriness_isSet = !json[QString("savoriness")].isNull() && m_savoriness_isValid;

    m_fattiness_isValid = ::OpenAPI::fromJsonValue(fattiness, json[QString("fattiness")]);
    m_fattiness_isSet = !json[QString("fattiness")].isNull() && m_fattiness_isValid;

    m_spiciness_isValid = ::OpenAPI::fromJsonValue(spiciness, json[QString("spiciness")]);
    m_spiciness_isSet = !json[QString("spiciness")].isNull() && m_spiciness_isValid;
}

QString OAIGetRecipeTasteByID_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetRecipeTasteByID_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_sweetness_isSet) {
        obj.insert(QString("sweetness"), ::OpenAPI::toJsonValue(sweetness));
    }
    if (m_saltiness_isSet) {
        obj.insert(QString("saltiness"), ::OpenAPI::toJsonValue(saltiness));
    }
    if (m_sourness_isSet) {
        obj.insert(QString("sourness"), ::OpenAPI::toJsonValue(sourness));
    }
    if (m_bitterness_isSet) {
        obj.insert(QString("bitterness"), ::OpenAPI::toJsonValue(bitterness));
    }
    if (m_savoriness_isSet) {
        obj.insert(QString("savoriness"), ::OpenAPI::toJsonValue(savoriness));
    }
    if (m_fattiness_isSet) {
        obj.insert(QString("fattiness"), ::OpenAPI::toJsonValue(fattiness));
    }
    if (m_spiciness_isSet) {
        obj.insert(QString("spiciness"), ::OpenAPI::toJsonValue(spiciness));
    }
    return obj;
}

double OAIGetRecipeTasteByID_200_response::getSweetness() const {
    return sweetness;
}
void OAIGetRecipeTasteByID_200_response::setSweetness(const double &sweetness) {
    this->sweetness = sweetness;
    this->m_sweetness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_sweetness_Set() const{
    return m_sweetness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_sweetness_Valid() const{
    return m_sweetness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getSaltiness() const {
    return saltiness;
}
void OAIGetRecipeTasteByID_200_response::setSaltiness(const double &saltiness) {
    this->saltiness = saltiness;
    this->m_saltiness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_saltiness_Set() const{
    return m_saltiness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_saltiness_Valid() const{
    return m_saltiness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getSourness() const {
    return sourness;
}
void OAIGetRecipeTasteByID_200_response::setSourness(const double &sourness) {
    this->sourness = sourness;
    this->m_sourness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_sourness_Set() const{
    return m_sourness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_sourness_Valid() const{
    return m_sourness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getBitterness() const {
    return bitterness;
}
void OAIGetRecipeTasteByID_200_response::setBitterness(const double &bitterness) {
    this->bitterness = bitterness;
    this->m_bitterness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_bitterness_Set() const{
    return m_bitterness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_bitterness_Valid() const{
    return m_bitterness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getSavoriness() const {
    return savoriness;
}
void OAIGetRecipeTasteByID_200_response::setSavoriness(const double &savoriness) {
    this->savoriness = savoriness;
    this->m_savoriness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_savoriness_Set() const{
    return m_savoriness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_savoriness_Valid() const{
    return m_savoriness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getFattiness() const {
    return fattiness;
}
void OAIGetRecipeTasteByID_200_response::setFattiness(const double &fattiness) {
    this->fattiness = fattiness;
    this->m_fattiness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_fattiness_Set() const{
    return m_fattiness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_fattiness_Valid() const{
    return m_fattiness_isValid;
}

double OAIGetRecipeTasteByID_200_response::getSpiciness() const {
    return spiciness;
}
void OAIGetRecipeTasteByID_200_response::setSpiciness(const double &spiciness) {
    this->spiciness = spiciness;
    this->m_spiciness_isSet = true;
}

bool OAIGetRecipeTasteByID_200_response::is_spiciness_Set() const{
    return m_spiciness_isSet;
}

bool OAIGetRecipeTasteByID_200_response::is_spiciness_Valid() const{
    return m_spiciness_isValid;
}

bool OAIGetRecipeTasteByID_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sweetness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_saltiness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sourness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bitterness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_savoriness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fattiness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_spiciness_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetRecipeTasteByID_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sweetness_isValid && m_saltiness_isValid && m_sourness_isValid && m_bitterness_isValid && m_savoriness_isValid && m_fattiness_isValid && m_spiciness_isValid && true;
}

} // namespace OpenAPI
